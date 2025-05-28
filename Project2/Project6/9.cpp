#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int put;
	while (true) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> put;
		if (put == 0)
			break;
		else {
			v.push_back(put);
			int sum = 0;
			double med;
			for (int i = 0; i < v.size(); i++) {
				cout << v[i] << " ";
				sum += v[i];
			}
			med = double(sum) / v.size();
			cout << endl << "평균 = " << med << endl;
		}
	}

}