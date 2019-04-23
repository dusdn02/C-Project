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
	Student(int, const char*);
	void show();
};

Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;

}
Student::Student(int nHakbun, const char* sName) {
	this->nHakbun = nHakbun;
	this->sName = sName;
}

void Student::show() {
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}

int main() {
	SetConsoleOutputCP(65001);
	Student students[3] = {
		Student(),
		Student(4567, "�Ͽ�"),
		Student(9876,"�ƴ�")
	};
	for (int i = 0; i < 3; i++) {
		students[i].show();
	}
	return 0;
}