#include <iostream>
#include <windows.h>
using namespace std;

#pragma execution_character_set( "utf-8" )

int sum(int x, int y, int z = 0, int w = 0) {
	//�Ű����� 0,1���� ȣ���� �Ұ��ϴ�
	//����Ʈ �Ű������� ���� �ݵ�� �����ʺ��� ���������� ���� �ԷµǾ�� ��
	return x + y + z + w;
}

int main() {

	SetConsoleOutputCP(65001);

	cout << "sum(10,15)=" << sum(10, 15) << endl;
	cout << "sum(10,15,25)=" << sum(10, 15, 25) << endl;
	cout << "sum(10,15,25,30)=" << sum(10, 15, 25, 30) << endl;

	return 0;
}