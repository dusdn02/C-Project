#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

class Car {
	int ton, price;
public:
	static int count;//정적변수는 일반함수에서 사용가능
	void test() {
		cout << "테스트입니다." << count << endl;
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
		//int imsi = 10; ->사용가능
		//return count+imsi+ton; //ton은 사용 불가능
		return count;
}
};

int Car::count = 0;
int main() {
	SetConsoleOutputCP(65001);

	Car car1;
	cout << "생성된 자동차의 수 : " << car1.getCount() << endl;
	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << car2.getCount() << endl;
	return 0;
}