#include <iostream>
#include <string>
using namespace std;

int main() {
	string a[5];
	int size = 0;

	for (int i = 0; i < 5; i++) {
		cout << "문자열 입력 : ";
		cin >> a[i];
	}
	
	for (int i = 1; i < 5; i++) {
		for (int j = 0; i < 5; i++) {
			if (a[i].size() > a[j].size()) {
				size = i;
			}
			else {
				size = j;
			}
		}
	}

	cout << "가장 긴 문자열 : " << a[size] << endl;
}