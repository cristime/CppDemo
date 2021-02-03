#include "../headers/parse.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>

const char * Info[] = {
	"Mine_console: A console minesweeper.\n",
	"Usage: Mine_console [OPTION]\n",
	"Options: E/N/H: easy/normal/hard\n",
	"EASY: 10*10 gameboard, mine_num: 20\n",
	"NORMAL: 20*20 gameboard, mine_num: 80\n",
	"HARD: 30*30 gameboard, mine_num: 160\n"
};

const int ParseArg(int argc, char * argv[]) {
	const char * MODE[] = { "E", "N", "H" };
	if (argc != 2)  { PrintInfo(); exit(1); }
	int flag = 3;
	for (int i = 0; i < 3; i++)
		if (!strcmp(argv[1], MODE[i])) flag = i + 1;
	if (flag == 3) { PrintInfo(); exit(1); }
	return flag;
}

void PrintInfo() {
	for (int i = 0; i < 6; i++)
		printf("%s", Info[i]);
}
