#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam)
	{
		cout << "MyPerson()" << endl;
	}
	//복사 생성자 선언 및 정의 
	MyPerson(const MyPerson &rhs) : nAge(rhs.nAge)//nAge는 param, rhs.nAge는 p1
												  //rhs는 p1이다, nAge(rhs.nAge)은 param에 있는 nAge에게 값을 전달함
	{
		cout << "MyPerson(const MyPerson &)" << endl;
	}
	int getData(void)const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};

void TestFunc(MyPerson *param) {
	cout << "TestFunc()" << endl;
	param->setData(50);
	cout << "param : " << param->getData() << endl;

}

int main() {
	cout << "*****Begin*****" << endl;
	MyPerson p1(30);
	TestFunc(&p1);
	cout << "p1 : " << p1.getData() << endl;
	cout << "******End******" << endl;
	return 0;
}