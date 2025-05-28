#include <iostream>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
    T* p = new T[sizea + sizeb];
    for (int i = 0; i < sizea; i++)
        p[i] = a[i];
    for (int i = sizea; i < sizea + sizeb; i++)
        p[i] = b[i - sizea];
    return p;
}

int main() {
    cout << "int concat:" << endl;
    int a[3] = { 1, 20, 3 };
    int b[4] = { 14, 52, 6, 79 };
    int* con = concat(a, 3, b, 4);  
    for (int i = 0; i < 7; i++) cout << con[i] << ' ';
    delete[] con;

    cout << endl << "char concat:" << endl;
    char a2[5] = { 'A','C','E','T','w' };
    char b2[3] = { 'b', 'U', 'W' };
    char* ccont = concat(a2, 5, b2, 3);  
    for (int i = 0; i < 8; i++) cout << ccont[i] << ' ';
    delete[] ccont;
}