#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

class Student {
private:
	int nHakbun;
	const char* sName;
public:
	Student();
	void show();
};

Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;

}

void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}

int main() {
	SetConsoleOutputCP(65001);
	Student student1;
	student1.show();
	return 0;
}