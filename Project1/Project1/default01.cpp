#include <iostream>
#include <windows.h>
using namespace std;

#pragma execution_character_set( "utf-8" )

//void display(char c, int n = 10) �Ű����� 1�� �Ǵ� 2��
void display(char c = '*' , int n = 10) {//�Ű�����ȣ����
	//�Ͼ�� �Ű������� 0�� �Ǵ� 1�� �Ǵ� 2���� ȣ���� �� �ִ�.
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main() {

	SetConsoleOutputCP(65001);


	cout << "�ƹ��� �μ��� ���޵��� �ʴ� ��� : ";
	display();
	cout << endl;
	cout << "ù ��° �μ��� ���޵Ǵ� ��� : ";
	display('A');
	cout << endl;
	cout << "��� �μ��� ���޵Ǵ� ��� : ";
	display('A', 20);
	cout << endl;

	return 0;
}