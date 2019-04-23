#include<iostream>
#include<string>
using namespace std;

int main() {
	string a[5];
	for (int i = 0; i < 5; i++) {
		cout << "문자열을 입력하시오:: ";
		cin >> a[i];
	}
	string max = a[0];
	for (int i = 1; i < 5; i++) {
		if (a[i].size() > max.size())
			max = a[i];
	}
	cout << "제일 긴 문자열:  " << max << endl;
	return 0;
}