#include <iostream>
using namespace std;

int main() {
	int a = 3;
	int *ptr = &a;
	int *ptr2 = nullptr;


	cout << "a�� �ּҰ��� �����մϴ�." << ptr << endl;
	cout << "a�� ���� ���� �����մϴ�." << *ptr << endl;

	*ptr = 10; // *ptr�� ������ a�� ����. �� a=10�� ���� ���̴�.
	cout << "a�� ���� ���� ������ �����մϴ�." << *ptr << endl;
	cout << "a�� �ּҰ��� �ٲ��� �ʽ��ϴ�." << ptr << endl;

	return 0;
}
