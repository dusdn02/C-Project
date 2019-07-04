#include <iostream>
#include <string>
using namespace std;

class Person {
	char* name;
	int age;
public:
	Person(const char *myname, int myage) {
		int len = strlen(myname) + 1;//strlen()�Լ��� ���ڿ��� ����
		name = new char[len];//heap������ �޸� ����
		strcpy_s(name, 20, myname);//myname�� ����� ����
		//len���� ��ŭ name���� ����
		age = myage;
	}
	void ShowPerson() const {//const�� ��������� ���� ���� ���ϰ� ��
		//this->age = 200; ----->�����߻�
		//const�� ��� ������ ��������� ������Ű��, ���࿡ ���������
		//�����ϸ� ������ ����(Ÿ��)���� ������ �߻���Ű�� ����
		cout << "�̸�:" << name << "   ";
		cout << "����: " << age << endl;
	}
	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main() {
	Person man1("Lee Mee Rim", 27);//�Ű����� 2���� ������ ȣ��
	Person man2(man1);//�����Ϸ��� ���ؼ� ��������ڰ� ��������鼭
	//�⺻��������� ���������� ���簡 ������ �����ʹ� �ּҰ��� ���簡 ��
	man1.ShowPerson();
	man2.ShowPerson();
	//�ѹ� �����µ� �� ������� �ؼ� ������ ����.
	return 0;
}