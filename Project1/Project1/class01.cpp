#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

class Point {
public://�Ʒ��� �ִ� ��������� �Լ��� public���� ����
	int x;
	int y;

	void Print();//�Լ�����
};

int main() {
	SetConsoleOutputCP(65001);
	Point point = { 1,2 };
	point.Print();

	point.x = 100;
	point.y = 200;
}

void Point::Print() {//�Լ�����
	cout << "x ��ǥ�� " << x << endl;
	cout << "y ��ǥ�� " << y << endl;
}