#include <iostream>
using namespace std;

class Cat {
private:
	int* pAge = new int;//heap������ �����Ҵ� 4����Ʈ
	const char* pName =  new char;//heap������ �����Ҵ� 1����Ʈ
public:
	Cat() {
		*pAge = 18;
		pName = "�߿���";
	}
	~Cat() {
		delete pAge;//��������� �������� �Ҵ�� ������ �ݵ�� delete
		delete pName;
	}
	int getAge() { return *pAge; }
	void setAge(int age) { *pAge = age; }
	char* getName() { return (char*)pName; }
	void setName(const char* name) { pName = name; }
};

int main() {
	Cat* pCat = new Cat;
	cout << "������� ���� : " << pCat->getAge() << ", ������� �̸� : " << pCat->getName() << endl;
	pCat->setAge(20);
	pCat->setName("�����");
	cout << "������� ���� : " << pCat->getAge() << ", ������� �̸� : " << pCat->getName() << endl;
	return 0;
}