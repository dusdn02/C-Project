#include <iostream>
using namespace std;

class MyPerson {
private:
	int nAge = 0;
public:
	MyPerson(int nParam) : nAge(nParam)
	{
		cout << "MyPerson()" << endl;
	}
	MyPerson(const MyPerson &rhs) = delete;//delete를 안하면 기본 복사 생성자가 만들어짐
	int getData(void)const { return nAge; }
	void setData(int nData) { nAge = nData; }
};
void TestFunc(MyPerson param) {
	cout << "TestFunc()" << endl;
	param.setData(50);
	cout << "param : " << param.getData() << endl;

}

int main() {
	cout << "*****Begin*****" << endl;
	MyPerson p1(30);
	TestFunc(p1);
	cout << "p1 : " << p1.getData() << endl;
	cout << "******End******" << endl;
	return 0;
}