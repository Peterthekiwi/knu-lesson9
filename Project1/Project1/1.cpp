#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDesertString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDesertString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDesertString() << endl;
	}
};

class WonToDollar :public Converter {
public:
	WonToDollar(double ratio) :Converter(ratio){}
	double convert(double src) {
		return src / ratio;
	}
	string getSourceString() {
		return "��";
	}
	string getDesertString() {
		return "�޷�";
	}
};

int main() {
	WonToDollar wd(1010);
	wd.run();
}