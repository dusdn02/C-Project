#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson(){ cout << "MyPerson()" << endl; }
	//복사 생성자 선언 및 정의
		MyPerson(const MyPerson &rhs)
			// : nAge(rhs.nAge)
	{
		this->nAge = rhs.nAge;
		cout<< "MyPerson(const MyPerson &)" << endl;
	}

	int getData(void)const { return nAge; }
	int setData(int nData) { return nData; }

private:
	int nAge = 0;
};

int main() {
	MyPerson p1;
	p1.setData(20);
	//복사 생성자가 호출되는 경우
	//MyPerson p2(p1);
	//MyPerson p2=p1;
	MyPerson p2;
	p2 = p1;
	cout << "Person의 나이 : " << p2.getData() << endl;
	return 0;
}