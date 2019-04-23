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
	~Car() {
		cout << "소멸자 : " << count-- << endl;
	}
};

int Car::count = 0;
int main() {
	SetConsoleOutputCP(65001);

	Car car1;
	cout << "생성된 자동차의 수 : " << Car::count << endl;
	//정적변수에 접근할때 클래스이름으로 접근 가능하다.
	cout << "생성된 자동차의 수 : " << car1.count << endl;
	//정적변수에 접근할때 객체이름으로도 접근 가능하다.
	car1.test();
	cout << "테스트2입니다." << car1.test2() << endl;
	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << Car::count << endl;
	return 0;
}