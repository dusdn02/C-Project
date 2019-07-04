#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	string name;
	int age;
public:
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;
	}
	void ShowPerson() {
		cout << name << "�� ���̴�" << age << "�Դϴ�." << endl;
	}
};
class Student : public Person {//��Ӱ��踦 ǥ��
	//    ����				  ����
private:
	int id;
public:
	Student(int id, const string& name, int age) : Person(name, age) {
		//����(����)Ŭ������ �������� Person(name, age)�� ���� ȣ���� ��
		//�Ļ�(����)Ŭ������ ������ �����Ѵ�.
		this->id = id;
	}
};
int main() {
	Student student(1234, "ȫ�浿", 33);
	student.ShowPerson();
}