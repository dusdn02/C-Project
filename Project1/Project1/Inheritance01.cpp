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
		cout << name << "의 나이는" << age << "입니다." << endl;
	}
};
class Student : public Person {//상속관계를 표현
	//    하위				  상위
private:
	int id;
public:
	Student(int id, const string& name, int age) : Person(name, age) {
		//기초(상위)클래스의 생성자의 Person(name, age)을 먼저 호출한 후
		//파생(하위)클래스의 문장을 실행한다.
		this->id = id;
	}
};
int main() {
	Student student(1234, "홍길동", 33);
	student.ShowPerson();
}