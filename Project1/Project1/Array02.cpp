// �迭�� �հ� ����� ���Ͻÿ�
#include <iostream>
using namespace std;

int main() {
	int arr[4] = { 1,2,3,4 };
	int hap=0;
	double avg;
	// arr[0]=1, arr[1]=2, arr[2]=3, arr[3]=4
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << "   ";
		hap += arr[i];
	}
	avg = hap / 4.0;

	cout << "�� : " << hap << ", ��� : " << avg << endl;

	return 0;
}


