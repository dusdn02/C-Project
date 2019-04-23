#include <iostream>
#include <windows.h>
using namespace std;

#pragma execution_character_set( "utf-8" )

int sum(int x, int y, int z = 0, int w = 0) {
	//매개변수 0,1개의 호출은 불가하다
	//디폴트 매개변수의 값은 반드시 오른쪽부터 순차적으로 값이 입력되어야 함
	return x + y + z + w;
}

int main() {

	SetConsoleOutputCP(65001);

	cout << "sum(10,15)=" << sum(10, 15) << endl;
	cout << "sum(10,15,25)=" << sum(10, 15, 25) << endl;
	cout << "sum(10,15,25,30)=" << sum(10, 15, 25, 30) << endl;

	return 0;
}