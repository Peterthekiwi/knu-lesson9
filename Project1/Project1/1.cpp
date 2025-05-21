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
		cout << getSourceString() << "을 " << getDesertString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDesertString() << endl;
	}
};

class WonToDollar :public Converter {
public:
	WonToDollar(double ratio) :Converter(ratio){}
	double convert(double src) {
		return src / ratio;
	}
	string getSourceString() {
		return "원";
	}
	string getDesertString() {
		return "달러";
	}
};

int main() {
	WonToDollar wd(1010);
	wd.run();
}