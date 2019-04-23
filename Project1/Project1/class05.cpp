#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

class Student {
private:
	char* name;
	int age;

public:
	Student(const char* myname, int myage) {
		int len = strlen(myname) + 1; //myname�� ���ڿ��� ���� +1
		name = new char[len]; //�޸𸮰� �����Ҵ�
		strcpy_s(name, len, myname); //myname�� �ִ� ���ڿ��� len���̸�ŭ
													 //name�� �����Ͻÿ�.
		age = myage;
	}
	
	void ShowStudentInfo() {
		cout << "�̸� : " << this->name << endl;
		cout << "���� : " << this->age << endl;
	}

	~Student() { //�Ҹ��� ȣ���� ���� ������ �������� ȣ���� �Ͼ��
		//�Ҹ��ڴ� ���α׷��� ������� ���� ȣ��ȴ�.
		delete [] name;
		//name�� �����Ҵ��� �޾ұ� ������
		//�Ҵ�� ��� �迭�� ����(�޸� ����)�Ѵ�.
		//���࿡ "delete name;" [] ��ȣ�� �����ϸ� name�� ����Ű��
		//ù��° ��Ҹ� �����Ѵ�.
		cout << "called destructor!! " << this->age << endl;
	}
};

int main() {
	SetConsoleOutputCP(65001);

	Student student1("lee mee rim", 33); //�Ű����� 2���� ������ ȣ��
	Student student2("hong gil dong", 34);
	student1.ShowStudentInfo();
	student2.ShowStudentInfo();

	return 0; //�Ҹ��ڴ� ���α׷� �����ϱ� ���� �ڵ����� ȣ��ȴ�.
}