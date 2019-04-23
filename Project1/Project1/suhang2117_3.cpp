#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

class Employee {
private:
	const char *name;
	int age;
	int salary;
public:
	void getter();
	void setter();
};

void Employee::setter() {
	name="이미림";
	age=29;
	salary=4500000;
}

void Employee::getter() {
	cout << "이름 : " << this->name << endl;
	cout << "나이 : " << this->age << endl;
	cout << "월급 : " << this->salary << endl;

}

int main() {
	SetConsoleOutputCP(65001);//이건 제 노트북 결과창에 한글이 나오지 않아서 썼습니다.

	Employee employee1;

	cout << "setter()" << endl;
	employee1.setter();

	cout << "getter()" << endl;
	cout << "Employee1 : " << endl;
	employee1.getter();
}