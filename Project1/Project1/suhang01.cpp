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
	cout << "������ �Է� : ";
	cin >> n;
	sayHello();
	cout << "sayHello(" << n << ")->";
	sayHello(n);
	return 0;
}