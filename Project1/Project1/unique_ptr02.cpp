#include <memory>
#include <iostream>
using namespace std;

int main() {
	unique_ptr<int[]>ptr(new int[10]);

	for (int i = 0; i < 10; i++) {
		ptr[i] = 20 + i;
		cout << ptr[i] << endl;
	}
	

	//delete�� ������� �ʾƵ� �ȴ�.
	return 0;
}