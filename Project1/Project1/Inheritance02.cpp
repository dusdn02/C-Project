#include <iostream>
using namespace std;
class BaseData {
public: // ������ ���� ����
	BaseData() { cout << "BaseData()" << endl; }
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
protected: // �Ļ� Ŭ������ ���� ����
	void PrintData() { cout << "BaseData::PrintData()" << " "; }
private: // ���� �Ұ���
	int m_nData = 0;
};
class DerivedData : public BaseData {
public:
	DerivedData() { cout << "DerivedData()" << " "; }
	//�����ڸ� �����ϱ� ���� �θ�Ŭ������ �⺻�����ڰ� ���� ����ȴ�.
	void TestFunc() {
		PrintData();
		SetData(5);
		cout << BaseData::GetData() << endl;
	}
};
void main() {
	DerivedData data;//�Ű��������� ������ ȣ��
	data.SetData(10);
	cout << data.GetData() << endl;
	data.TestFunc();
}