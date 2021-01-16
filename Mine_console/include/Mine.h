#ifndef MINE_H
#define MINE_H

#include <vector>

#ifndef EASY
#define EASY 0
#endif // EASY

#ifndef MEDIUM
#define MEDIUM 1
#endif // MEDIUM

#ifndef HARD
#define HARD 2
#endif // HARD

const unsigned size_Easy = 10;
const unsigned size_Medium = 20;
const unsigned size_Hard = 30;

struct Position
{
    unsigned x, y;
};

class Mine
{
public:
    Mine(const int & difficulty);
    ~Mine();

    void GenerateMap();
    void GetInput();
    void ShowMap();
    void ShowAnswerMap();
    bool OpenBlock();
    bool MarkMine();
    bool CheckFinished();
    bool CheckGameover();
    bool Logic();

private:
    std::vector<std::string> gameBoard, answerBoard;
    Position cur_pos;
    unsigned mineNum;
    char cur_input;
    int difficulty;     // easy->0, medium->1, hard->2
};

#endif // MINE_H
