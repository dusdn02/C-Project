#include <iostream>
#include <windows.h>
using namespace std;

#pragma execution_character_set( "utf-8" )

#define multiple_define(A) ((A)*(A));
int multiple_inline(int A);

int main() {

	SetConsoleOutputCP(65001);

	int a = 3;

	cout << "inline�Լ��� ���� " << multiple_inline(++a) << endl;
	a = 3;
	cout << "define ��ũ���� ���� " << multiple_define(++a);
	return 0;
}

inline int multiple_inline(int A) {
	return A * A;
}