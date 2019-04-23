#include <iostream>
#include <windows.h>
using namespace std;

#pragma execution_character_set( "utf-8" )

struct Point {
	int x;
	int y;
};
int main() {
	SetConsoleOutputCP(65001);
	Point point = { 1,2 };
	Point *Ppoint = &point;
	//point.x = 100;
//	point.y = 200;
//	cout << "Á¡ pointÀÇ ÁÂÇ¥´Â (" << point.x << ", " << point.y <<")"<< endl;
	//struct Point point2 = { 3,4 };
	//cout << "Á¡ point2ÀÇ ÁÂÇ¥´Â (" << point2.x << ", " << point2.y <<")"<< endl;
	cout << "Á¡ PpointÀÇ ÁÂÇ¥´Â (" << (*Ppoint).x << ", " << (*Ppoint).y << ")" << endl;
	cout << "Á¡ PpointÀÇ ÁÂÇ¥´Â (" << Ppoint->x << ", " << Ppoint->y << ")" << endl;

	return 0;
}