#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

struct Point {
	int x;
	int y;

	void Print();//ÇÔ¼ö¼±¾ð
};

int main() {
	SetConsoleOutputCP(65001);
	Point point = { 1,2 };
	point.Print();
}

void Point::Print() {
	cout << "x ÁÂÇ¥´Â " << x << endl;
	cout << "y ÁÂÇ¥´Â " << y << endl;
}