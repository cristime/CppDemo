#include "Math.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char op[4]{'+', '-', '*', '/' };

void FirstRun() {
	cout << "����һ��Сѧ��ѧϰ��ѧ�����С����" << endl << endl;
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

	cout << "���������������⣺";
	cin >> choose;
	for (int i = 0; i < choose; i++) {
		int a = (rand() % (100 - 10 + 1)) + 10, b = (rand() % (100 - 10 + 1)) + 10, oper = rand() % 4;
		showMenu(a, b, op[oper]);
		if (getAnswer() == Calc(a, b, op[oper])) {
			++right;
			cout << "�������" << endl << endl;
			system("pause");
			continue;
		}

		++wrong;
		do {
			cout << "�������" << endl << endl;
			system("pause");
			showMenu(a, b, op[oper]);
		} while (getAnswer() != Calc(a, b, op[oper]));
	}

	cout << "���������������� " << right << " ���⣬ ���� " << wrong << " ���⡣�´������ɣ�" << endl;
	system("pause");
}



int main() {
	Work();
	return 0;
}
