#include <iostream>
#include <string>
using namespace std;
class Person {
	string name;//�ڽ��� Ŭ���� �������� ����
protected:
	string addr; //��Ӱ��迡���� �����Ҽ� �ִ�.
};
class Student :Person {
public:
	/*
	void setNamer(string name){
	this->name = name;
	}	*/
	void setAddr(string name) {
		this->addr = addr;
	}
	string getAddr() {
		return addr;
	}
};
int main() {
	Student student1;
	student1.setAddr;
	student1.setAddr("����� ���Ǳ� ȣ�Ϸ� 546����");
	cout << student1.getAddr() << endl;
	return 0;
}
