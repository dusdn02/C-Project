#include <iostream>
class Person {
public:
	void PrintMethod() {
		std::cout << "Person's Methosd" << std::endl;
	}
};
class Student :public Person {
public:
	void PrintMethod() {
		Person::PrintMethod();
		//PersonŬ������ PrintMethod()�Լ��� ȣ���Ѵ�.
		std::cout << "Child Method" << std::endl;
	}
};
int main() {
	Student student;
	Person p1;
	student.PrintMethod();
	p1.PrintMethod();

	return 0;
}