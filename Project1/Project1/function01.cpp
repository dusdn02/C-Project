#include <iostream>
using namespace std;

int sum(int opr1, int opr2) { // �Լ�����
	int hap;
	hap = opr1 + opr2;
	return hap;
}
void display(); // �Լ� ����

int main() {
	int a = 2, b = 3;
	int p = sum(a, b);
	cout << "sum �Լ��� ȣ���ϰ� ���� ��� �� : " << p << endl;
	display();

	return 0;
}
void display() {// �Լ� ����

	cout << "display()�Լ��� ��ȯ���� ���� �Լ�" << endl;
	// return;
}


