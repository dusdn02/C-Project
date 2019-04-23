#include <iostream>
using namespace std;


void sayHello(int n) {
	cout << "sayHello(" << n << ")-> Hello ";
	for (int i = 1; i < n; i++) {
		cout << "Hello ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	sayHello(n);
	cin >> n;
	sayHello(n);

}