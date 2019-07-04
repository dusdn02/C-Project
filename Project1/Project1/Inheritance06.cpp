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
		//Person클래스의 PrintMethod()함수를 호출한다.
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