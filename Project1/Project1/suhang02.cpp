#include<iostream>
#include<string>
using namespace std;

int main() {
	string a[5];
	for (int i = 0; i < 5; i++) {
		cout << "���ڿ��� �Է��Ͻÿ�:: ";
		cin >> a[i];
	}
	string max = a[0];
	for (int i = 1; i < 5; i++) {
		if (a[i].size() > max.size())
			max = a[i];
	}
	cout << "���� �� ���ڿ�:  " << max << endl;
	return 0;
}