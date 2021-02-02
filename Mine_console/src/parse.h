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

const char * Info[] = {
	"Mine_console: A console minesweeper.\n",
	"Usage: mine.run [OPTION]\n",
	"Options: E/N/H: easy/normal/hard\n",
	"EASY: 10*10 gameboard, mine_num: 20\n",
	"NORMAL: 20*20 gameboard, mine_num: 80\n",
	"HARD: 30*30 gameboard, mine_num: 160\n"
};

#endif
