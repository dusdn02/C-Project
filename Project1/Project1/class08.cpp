#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

class Car {
	int ton, price;
public:
	static int count;//���������� �Ϲ��Լ����� ��밡��
	void test() {
		cout << "�׽�Ʈ�Դϴ�." << count << endl;
	}
	int test2() {
		return count;
	}
	Car() {
		ton = 0;
		price = 1000;
		count++;
	}
	Car(int ton, int price) {
		this->ton = ton;
		this->price = price;
		count++;
	}
	static int getCount() {
		//int imsi = 10; ->��밡��
		//return count+imsi+ton; //ton�� ��� �Ұ���
		return count;
}
};

int Car::count = 0;
int main() {
	SetConsoleOutputCP(65001);

	Car car1;
	cout << "������ �ڵ����� �� : " << car1.getCount() << endl;
	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << car2.getCount() << endl;
	return 0;
}