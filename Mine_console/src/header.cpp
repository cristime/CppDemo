#include "../headers/header.h"
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <queue>


struct Node { int x, y; };
bool vis[310][310];

inline void ClearWindow() {
    #ifdef WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

Game::Game(int & argc, char *argv[])
{
    // Parse console arguments and select difficulty.
    const int result = ParseArg(argc, argv);
    switch (result)
    {
    case EASY:
        mineNum = 20;
        mapSize = 10;
        break;
    case NORMAL:
        mineNum = 80;
        mapSize = 20;
        break;
    case HARD:
        mineNum = 160;
        mapSize = 30;
    default:
        printf("An error occured, failed to create the map.\n");
        exit(1);
    }

    // Create and init maps.
    openNum = 0;
    for (int i = 0; i < mapSize; i++)
        for (int j = 0; j < mapSize; j++)
        {
            gameMap[i].push_back('.');
            answerMap[i].push_back(' ');
        }
}


void Game::bfs(int x, int y) {
    const int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 }, 
              dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
    std::queue <Node> q;
    q.push({x, y});
    while (!q.empty()) {
        int x1 = q.front().x, y1 = q.front().y, count = 0;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int x2 = x1 + dx[i], y2 = y1 + dy[i];
            if (x2 >= 0 && y2 >= 0 && x2 < mapSize && y2 < mapSize && answerMap[x2][y2] == '*')
                count++;
        }
        answerMap[x1][y1] = count + '0';
        for (int i = 0; i < 8; i++) {
            int x2 = x1 + dx[i], y2 = y1 + dy[i];
            if (x2 >= 0 && y2 >= 0 && x2 < mapSize && y2 < mapSize && !vis[x2][y2]) {
                q.push({x2, y2});
                vis[x2][y2] = true;
            }
        }
    }
}


void Game::GenMap()
{
    srand(time(nullptr));
    int count = 0;
    while (count <= mineNum)
    {
        int x = rand() % mapSize, y = rand() % mapSize;
        if (answerMap[x][y] == ' ')
        {
            answerMap[x][y] = '*';
            vis[x][y] = true;
            count++;
        }
    }
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < mapSize; i++)
        for (int j = 0; j < mapSize; j++) {
            if (!vis[i][j])
                bfs(i, j);
        }

}

inline void Game::ShowMap()
{
    for (auto i : gameMap)
    {
        for (auto j : i)
            printf("%c ", j);
        putchar('\n');
    }
    printf("Mine num: %d\n", mineNum);
}


void Game::Input() {
    while (scanf("%c%c%c", &cur_x, &cur_y, &oper) != 3)
        printf("Input error! Please input again.\n");
}

bool Game::GameLoop() {
    while (true) {
        ClearWindow();
        ShowMap();
        Input();
        switch (oper) {
        case 'O':
            Open();
            break;
        case 'M':
            Mark();
            break;
        default:
            printf("Invalid operation. Please input again.\n");
            continue;
        }
        switch(Judge()) {
            case FAIL: return false;
            case FINISH: return true;
        }
    }
}


int Game::Judge() {
    if (openNum == mapSize * mapSize) return FINISH;
    if (oper == 'O' && answerMap[cur_x][cur_y] == '*' || mineNum < 0) return FAIL;
    return CONTINUE;
}

void Game::Open() {
    int x = cur_x - '0', y = cur_y - '0';
    gameMap[x][y] = answerMap[x][y];
}

void Game::Mark() {
    int x = cur_x - '0', y = cur_y - '0';
    gameMap[x][y] = 'M';
    mineNum--;
}

void Game::PrintAnswer() {
    for (auto i : answerMap) {
        for (auto j : i)
            printf("%c ", j);
        putchar('\n');
    }
}