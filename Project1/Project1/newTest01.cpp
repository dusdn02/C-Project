#include <iostream>
using namespace std;

int main() {
	//지역변수와 함수의 매개변수는 모두 스택 영역에 저장되기 때문에
	//함수 종료시 자동 삭제 된다.
	int* ptr1 = new int;
	*ptr1 = 20;
	cout << *ptr1 << endl;

	delete ptr1;
	return 0;
}