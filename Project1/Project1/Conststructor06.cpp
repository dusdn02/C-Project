#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest() { cout << "CTest::CTest()" << endl; }
	~CTest() { cout << "CTest::CTest()" << endl; }
}
};
int main() {
	cout << "Begin" << endl;

	//�迭�� ������ ������ �� �ִ�.
	CTest *pData = new CTest[3];//CTest[3]()�� ǥ���ص� �ȴ�.
	cout << "Test" << endl;

	//�迭�� ������ ���� �ݵ�� �迭�� �����Ѵ�.
	//�迭�� ������ ��ü�� �迭�� �������� ������ ù��° ��� �ϳ��� �Ҹ��Ѵ�.
	delete[] pData;//delete pData; --- �����߻��Ѵ�.
	//pData�� ����Ű�� �迭�� ��� ��ü�� �����Ѵ�.
	//�Ҹ��ڵ� 3�� ȣ���Ѵ�.

	cout << "End" << endl;

	return 0;
}