#include <iostream>
using namespace std;

int main() {
	//���������� �Լ��� �Ű������� ��� ���� ������ ����Ǳ� ������
	//�Լ� ����� �ڵ� ���� �ȴ�.
	int* ptr1 = new int;
	*ptr1 = 20;
	cout << *ptr1 << endl;

	delete ptr1;
	return 0;
}