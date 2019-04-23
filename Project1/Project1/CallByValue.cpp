#include <iostream>
#include <windows.h>
using namespace std;
#pragma execution_character_set( "utf-8" )

void SwapValue(int n1, int n2) {
	int temp = 0;
	temp = n1;
	n1 = n2;
	n2 = temp;

	cout << "SwapValue		num1 : " << n1 << " , num2 : " << n2 << endl;
}

void SwapPointer(int* n1, int* n2) {
	int temp = 0;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void SwapReference(int &n1, int &n2) {
	int temp = 0;
	temp = n1;
	n1 = n2;
	n2 = temp;
}

int main() {

	SetConsoleOutputCP(65001);

	int num1;
	int num2;

	cin >> num1 >> num2;

	cout << "¹Ù²î±â Àü		num1 : " << num1 << " , num2 : " << num2 << endl;

	SwapValue(num1, num2);
	SwapPointer(&num1, &num2);
	cout << "SwapPointer		num1 : " << num1 << " , num2 : " << num2 << endl;
	SwapReference(num1, num2);
	cout << "SwapReference		num1 : " << num1 << " , num2 : " << num2 << endl;

	return 0;
}