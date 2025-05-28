#include <iostream>
using namespace std;

template <class T>
T biggest(T data[], int n) {
	int max = data[0];
	for (int i = 1; i < n; i++)
		if (max < data[i])
			max = data[i];
	return max;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;
}