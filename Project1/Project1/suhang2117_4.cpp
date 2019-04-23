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
		cout << "데이터가 없습니다." << endl;
	}
	Movie(const char* title, const char* director, double rating) {
		this->title = title;
		this->director = director;
		this->rating = rating;
	}
	void Print();
};

void Movie::Print() {
	cout << "영화 제목 : " << this->title << endl;
	cout << "영화 감독 : " << this->director << endl;
	cout << "영화 평점 : " << this->rating << endl;

}


int main() {
	SetConsoleOutputCP(65001);//이건 제 노트북 결과창에 한글이 나오지 않아서 썼습니다.

	Movie m1("타이타닉", "제임스 카메론", 9.5);
	Movie m2("지오스톰", "딘 데블린", 8.34);

	cout << "영화 #1" << endl;
	m1.Print();
	cout << endl;
	cout << "영화 #2" << endl;
	m2.Print();
}