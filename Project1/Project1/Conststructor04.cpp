#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	//m_nData = nParam; --- ���Թ�
	CTest(int nParam) : m_nData(nParam)//������� �ʱ�ȭ
	{
		//�����Ҷ� �Ű������� ���� ���� ����Ѵ�.
		cout << "CTest::CTest()" << endl;
	}
};
int main() {
	cout << "Begin" << endl;
	CTest a(10);//CTest a; ---> �����߻�
	cout << "Before b" << endl;
	CTest b(20);
	cout << "End" << endl;

}