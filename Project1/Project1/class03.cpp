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
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;

}
Student::Student(int nHakbun, const char* sName) {
	this->nHakbun = nHakbun;
	this->sName = sName;
}

void Student::show() {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl;
}

int main() {
	SetConsoleOutputCP(65001);
	Student student1;
	Student student2(5678, "마리아");
	student1.show();
	student2.show();
	return 0;
}