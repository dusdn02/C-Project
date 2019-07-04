#include <memory>
#include <iostream>
using namespace std;

class CTest {
public:
	CTest() { cout << "CTest()" << endl; }
	~CTest() { cout << "~CTest()" << endl; }
	void TestFunc() { cout << "TestFunc()" << endl; }
};

int main() {
	cout << "*****Begin*****" << endl;
	shared_ptr<CTest> ptr1(new CTest);

	//한 대상을 하 포인터로 포인팅한다.
	//use count()는 리소스 소유자 수를 계산한다.
	cout << "Counter:" << ptr1.use_count() << endl;
	{
		shared_ptr<CTest>ptr2(ptr1);
		//shared_ptr<CTest> ptr2; ptr2 = ptr1; 작성해도 무방함
		//한대상을 두 포인터로 포인팅한다.
		cout << "Counter:" << ptr1.use_count() << endl;
		ptr2->TestFunc();