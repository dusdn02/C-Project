#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

class AccessTest {
public:
	void ShowJumsu();
	void setJumsu(const int data);
	int getJumsu();

private:
	int jumsu;
};

void AccessTest::ShowJumsu() {
	cout << "점수 : " << jumsu << endl;
}

void AccessTest::setJumsu(const int data) {
	jumsu = data;
}

int AccessTest::getJumsu() {
	return jumsu;
}

int main() {
	SetConsoleOutputCP(65001);

	AccessTest access;
	access.setJumsu(99);
	cout << "점수 : " << access.getJumsu() << endl;
	access.ShowJumsu();
	return 0;
}