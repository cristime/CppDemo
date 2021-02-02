#ifndef MINE_HEADER_H
#define MINE_HEADER_H

#include "parse.h"
#include <vector>

using std::vector;

class Game {
	private:
		vector < vector < char > > gameMap;
		vector < vector < char > > answerMap;
		int mineNum;
		char cur_x, cur_y, oper;	// 当前坐标和操作

	public:
		Game();
		~Game();
		void Input();
		bool GameLoop();
		bool Judge();
		void Open();
		void Mark();
};

#endif
