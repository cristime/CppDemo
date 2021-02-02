#ifndef MINE_HEADER_H
#define MINE_HEADER_H

#include "parse.h"
#include <vector>

using std::vector;

#define FAIL 0
#define FINISH 1

class Game {
	private:
		vector < vector < char > > gameMap;
		vector < vector < char > > answerMap;
		int mineNum, mapSize, openNum;
		char cur_x, cur_y, oper;	// Current position and operation.
		void bfs(int, int);

	public:
		Game(int, char * []);		// Constructor
		void GenMap();
		inline void ShowMap();
		void Input();
		bool GameLoop();
		int Judge();
		void Open();
		void Mark();
};

inline void ClearWindow();

#endif
