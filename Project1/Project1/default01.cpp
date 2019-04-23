#include <iostream>
#include <windows.h>
using namespace std;

#pragma execution_character_set( "utf-8" )

//void display(char c, int n = 10) 매개변수 1개 또는 2개
void display(char c = '*' , int n = 10) {//매개변수호출이
	//일어날때 매개변수가 0개 또는 1개 또는 2개를 호출할 수 있다.
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main() {

	SetConsoleOutputCP(65001);


	cout << "아무런 인수가 전달되지 않는 경우 : ";
	display();
	cout << endl;
	cout << "첫 번째 인수만 전달되는 경우 : ";
	display('A');
	cout << endl;
	cout << "모든 인수가 전달되는 경우 : ";
	display('A', 20);
	cout << endl;

	return 0;
}