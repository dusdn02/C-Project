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
	name="�̸̹�";
	age=29;
	salary=4500000;
}

void Employee::getter() {
	cout << "�̸� : " << this->name << endl;
	cout << "���� : " << this->age << endl;
	cout << "���� : " << this->salary << endl;

}

int main() {
	SetConsoleOutputCP(65001);//�̰� �� ��Ʈ�� ���â�� �ѱ��� ������ �ʾƼ� ����ϴ�.

	Employee employee1;

	cout << "setter()" << endl;
	employee1.setter();

	cout << "getter()" << endl;
	cout << "Employee1 : " << endl;
	employee1.getter();
}