#include "cmdline.h"
#include "include/Mine.h"
#include <cstdlib>
static int difficulty;

void ClearWindow();

#ifdef __linux__
void ClearWindow() { system("clear"); }
#elif defined (_WIN32)
void ClearWindow() { system("cls"); }
#endif // _WIN32

int main( int argc, char * argv[] )
{
    // Parse arguments --- set difficulty
    cmdline::parser argParser;
    argParser.add<std::string>("difficulty", 'd', "Difficulty of the game", true, "easy");
    argParser.parse_check(argc, argv);
    switch (argParser.get<std::string>("difficulty").c_str())
    {
    case "easy":
        difficulty = EASY;
        break;

    case "medium":
        difficulty = MEDIUM;
        break;

    case "hard":
        difficulty = HARD;
        break;
    }

    // Play game
    Mine game(difficulty);
    game.GenerateMap();
    while (true) {
        ClearWindow();
        game.ShowMap();
        game.GetInput();
        game.Logic();
        if (game.CheckGameover()) {
            ClearWindow();
            game.ShowAnswerMap();
            std::cout << "GameOver\n";
            break;
        }
        else if (game.CheckFinished()) {
            std::cout << "Congratulations!\n";
            break;
        }
    }
    return 0;
}
