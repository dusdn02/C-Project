#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

struct Point {
	int x;//�������
	int y;

	void Print() {//����Լ�
		cout << "x ��ǥ�� " << x << endl;
		cout << "y ��ǥ�� " << y << endl;
	}

};

int main() {
	SetConsoleOutputCP(65001);
	Point point = { 1,2 };
	point.Print();

	return 0;
}