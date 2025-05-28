#include <iostream>
#include <vector>
using namespace std;

template <class T>
void reverseArray(T data[], int num) {
    vector<T> reverse(num); 
    for (int i = 0; i < num; i++) {
        reverse[i] = data[num - i - 1]; 
    }
    for (int i = 0; i < num; i++) {
        data[i] = reverse[i];  
    }
}

int main() {
    int x[] = { 1, 10, 100, 5, 4 };
    reverseArray(x, 5);
    for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}