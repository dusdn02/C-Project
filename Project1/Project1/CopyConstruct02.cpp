#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam)
	{
		cout << "MyPerson()" << endl;
	}
	//���� ������ ���� �� ���� 
	MyPerson(const MyPerson &rhs) : nAge(rhs.nAge)//nAge�� param, rhs.nAge�� p1
		//rhs�� p1�̴�, nAge(rhs.nAge)�� param�� �ִ� nAge���� ���� ������
	{
		cout << "MyPerson(const MyPerson &)" << endl;
	}
	int getData(void)const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};
//�Ű� ������ MyPerson Ŭ���� �����̹Ƿ� ��������ڰ� ȣ��ȴ�.
void TestFunc(MyPerson param) {
	//MyPerson param = p1�� ���� �����̴�
	//����� ���ÿ� ��ü�� ����  �����Ҷ��� ��������ڰ� ȣ��ȴ�.
	cout << "TestFunc()" << endl;
	//�� ȣ���� �Լ����� �Ű� ���� �ν��Ͻ��� ���� �����Ѵ�.
	param.setData(50);
	cout << "param : " << param.getData() << endl;

}

int main() {
	cout << "*****Begin*****" << endl;
	MyPerson p1(30);//�Ű����� 1���� ������ ȣ��
	TestFunc(p1);//��ü�� ���޵ȴ�.
	//�Լ� ȣ�� �� p1 ���� ����Ѵ�
	cout << "p1 : " << p1.getData() << endl;
	cout << "******End******" << endl;
	return 0;
}