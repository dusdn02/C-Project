#include <iostream>
using namespace std;

class MyData {
private:
	int *m_nData = nullptr;
public:
	MyData(int nParam) {
		m_nData = new int;//heap영역에 메모리 생성(int 4바이트)
		*m_nData = nParam;
	}
	//복사 생성자
	MyData(const MyData &rhs) {
		cout << "CMyData(const MyData &)" << endl;
		m_nData = new int;
		*m_nData = *rhs.m_nData;
	}
	~MyData() {
		delete m_nData;//객체 a,b순으로 만들어 졌기 때문에
		//소멸은 역순 즉 b,a순으로 소멸된다.
		cout << "called destructor!" << endl;
	}
	int GetData() {
		if (m_nData != NULL)
			return *m_nData;
		return 0;
	}

};
int main() {
	MyData a(10);//매개변수 1개인 생성자 호출
	MyData b(a);//복사생성자 호출
	//깊은 복사가 일어남
	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	return 0;
}