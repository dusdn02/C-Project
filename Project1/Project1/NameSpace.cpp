#include <iostream>
using namespace std;

namespace definition { int jungi = 1; }
namespace justice { int jungi = 0; }

int main() {
	cout << definition::jungi << endl;
	//cout << jungi << endl;	---�����߻�
	cout << justice::jungi << endl;

}