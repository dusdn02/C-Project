#include <iostream>
using namespace std;

class Cat {
private:
	int* pAge = new int;//heap영역에 동적할당 4바이트
	const char* pName =  new char;//heap영역에 동적할당 1바이트
public:
	Cat() {
		*pAge = 18;
		pName = "야옹이";
	}
	~Cat() {
		delete pAge;//멤버변수에 동적으로 할당된 변수도 반드시 delete
		delete pName;
	}
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	char* getName() { return (char*)pName; }
	void setName(const char* name) { pName = name; }
};

int main() {
	Cat* pCat = new Cat;
	cout << "고양이의 나이 : " << pCat->getAge() << ", 고양이의 이름 : " << pCat->getName() << endl;
	pCat->setAge(20);
	pCat->setName("방울이");
	cout << "고양이의 나이 : " << pCat->getAge() << ", 고양이의 이름 : " << pCat->getName() << endl;
	return 0;
}