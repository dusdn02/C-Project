#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

struct Point {
	int x;//¸â¹öº¯¼ö
	int y;

	void Print() {//¸â¹öÇÔ¼ö
		cout << "x ÁÂÇ¥´Â " << x << endl;
		cout << "y ÁÂÇ¥´Â " << y << endl;
	}

};

int main() {
	SetConsoleOutputCP(65001);
	Point point = { 1,2 };
	point.Print();

	return 0;
}