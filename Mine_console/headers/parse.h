#ifndef MINE_PARSE_H
#define MINE_PARSE_H

// 常量
#ifndef CONSTANTS
#define CONSTANTS
#define EASY 1
#define NORMAL 2
#define HARD 3
#endif

void PrintInfo();
const int ParseArg(int argc, char * argv[]);

extern const char * Info[];

#endif
