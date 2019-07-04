#include <iostream>
using namespace std;

class CTest {
public:
	CTest() { cout << "CTest::CTest()" << endl; }
	~CTest() { cout << "~CTest::CTest()" << endl; }
};

CTest a;//main함수 전에 전역변수 개념으로 객체생성
//main()함수 실행전에 생성

int main() {
	cout << "Begin" << endl;
	
	cout << "Find" << endl;

	return 0;
}