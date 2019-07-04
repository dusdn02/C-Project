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

	//�� ����� �� �����ͷ� �������Ѵ�.
	//use count()�� ���ҽ� ������ ���� ����Ѵ�.
	cout << "Counter:" << ptr1.use_count() << endl;
	{
		shared_ptr<CTest>ptr2(ptr1);
		//shared_ptr<CTest> ptr2; ptr2 = ptr1; �ۼ��ص� ������
		//�Ѵ���� �� �����ͷ� �������Ѵ�.
		cout << "Counter:" << ptr1.use_count() << endl;
		ptr2->TestFunc();