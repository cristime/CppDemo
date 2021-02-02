#include "parse.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>

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
