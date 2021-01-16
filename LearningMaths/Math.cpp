#include "Math.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char op[4]{'+', '-', '*', '/' };

void FirstRun() {
	cout << "这是一个小学生学习数学计算的小程序。" << endl << endl;
	system("pause");
	system("cls");
}


void showMenu(int & a, int & b, char & oper) {cout << a << ' ' << oper << ' ' << b << " = ";}

int getAnswer() {
	int ans;
	cin >> ans;
	return ans;
}

int Calc(int & a, int & b, char & oper) {
	switch (oper) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	}
}

void Work() {
	srand((int)time(NULL));

	FirstRun();

	int choose, right = 0, wrong = 0;

	cout << "你想做几道计算题：";
	cin >> choose;
	for (int i = 0; i < choose; i++) {
		int a = (rand() % (100 - 10 + 1)) + 10, b = (rand() % (100 - 10 + 1)) + 10, oper = rand() % 4;
		showMenu(a, b, op[oper]);
		if (getAnswer() == Calc(a, b, op[oper])) {
			++right;
			cout << "答对啦！" << endl << endl;
			system("pause");
			continue;
		}

		++wrong;
		do {
			cout << "答错啦！" << endl << endl;
			system("pause");
			showMenu(a, b, op[oper]);
		} while (getAnswer() != Calc(a, b, op[oper]));
	}

	cout << "答题结束啦！你对了 " << right << " 道题， 错了 " << wrong << " 道题。下次再来吧！" << endl;
	system("pause");
}



int main() {
	Work();
	return 0;
}
