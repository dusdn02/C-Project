#include<iostream>
using namespace std;

void sayHello(int n = 1) {
	if (n == 1) 
		cout << "sayHello()->Hello" << endl;
	else {
		for (int i = 0; i < n; i++)
		{
			cout << "Hello ";
		}
		cout << endl;
	}
}
int main() {
	int n;
	cout << "정수를 입력 : ";
	cin >> n;
	sayHello();
	cout << "sayHello(" << n << ")->";
	sayHello(n);
	return 0;
}