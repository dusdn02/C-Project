#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	//m_nData = nParam; --- 대입문
	CTest(int nParam) : m_nData(nParam)//멤버변수 초기화
	{
		//생성할때 매개변수로 받은 값을 출력한다.
		cout << "CTest::CTest()" << endl;
	}
};
int main() {
	cout << "Begin" << endl;
	CTest a(10);//CTest a; ---> 오류발생
	cout << "Before b" << endl;
	CTest b(20);
	cout << "End" << endl;

}