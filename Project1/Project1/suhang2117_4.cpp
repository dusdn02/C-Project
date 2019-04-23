#include <iostream>
#include <windows.h>
#pragma execution_character_set( "utf-8" )
using namespace std;

class Movie {
	const char* title;
	const char* director;
	double rating;
public:
	Movie() {
		cout << "�����Ͱ� �����ϴ�." << endl;
	}
	Movie(const char* title, const char* director, double rating) {
		this->title = title;
		this->director = director;
		this->rating = rating;
	}
	void Print();
};

void Movie::Print() {
	cout << "��ȭ ���� : " << this->title << endl;
	cout << "��ȭ ���� : " << this->director << endl;
	cout << "��ȭ ���� : " << this->rating << endl;

}


int main() {
	SetConsoleOutputCP(65001);//�̰� �� ��Ʈ�� ���â�� �ѱ��� ������ �ʾƼ� ����ϴ�.

	Movie m1("Ÿ��Ÿ��", "���ӽ� ī�޷�", 9.5);
	Movie m2("��������", "�� ����", 8.34);

	cout << "��ȭ #1" << endl;
	m1.Print();
	cout << endl;
	cout << "��ȭ #2" << endl;
	m2.Print();
}