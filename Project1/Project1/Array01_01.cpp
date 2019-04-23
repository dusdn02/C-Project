#include <iostream>
using namespace std;

int main() {
	int hap = 0;
	double avg = 0.0;
	int arr[4] = { 1,2,3,4 };
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << "   ";
		hap += arr[i];
	}
	avg = hap / 4.0;

	cout << endl << "Че : " << hap << endl;
	cout << "ЦђБе : " << avg << endl;
	return 0;
}