#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int put;
	while (true) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
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
			cout << endl << "��� = " << med << endl;
		}
	}

}