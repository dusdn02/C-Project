#include <memory>
#include <iostream>
using namespace std;
class CMyData {
public:
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() { cout << "~CMyData()" << endl; }
};

int main() {
	cout << "*****Begin*****" << endl;
	{
		//�迭�� �����Ҵ��� �ϸ� ù��° ��Ҹ� ���� �Ǳ� ������ �޸� ������
		auto_ptr<CMyData> ptrTest(new CMyData[3]);
	}

	cout << "*****End*****" << endl;

	return 0;
}