#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Circle {
    string name;
    int radius;
public:
    Circle(int radius, string name) {
        this->name = name;
        this->radius = radius;
    }
    double getArea() { return 3.14 * radius * radius; }
    string getName() { return name; }
};

class List {
    vector<Circle> v;
    int num;
    int radius;
    string name;
    string searchName;
public:
    void start();
    void input() {
        cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
        cin >> radius >> name;
        v.push_back(Circle(radius, name));
    }
    void erase() {
        cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
        cin >> searchName;
        bool foundCircle = false;
        vector<Circle>::iterator it;
        for (it = v.begin(); it != v.end(); ) {
            if (it->getName() == searchName) {
                it = v.erase(it);
                foundCircle = true;
            }
            else {
                ++it;
            }
        }
        if (!foundCircle) {
            cout << "�ش� �̸��� ���� ã�� �� �����ϴ�." << endl;
        }
    }

};

void List::start() {
    while (true) {
        cout << "����:1, ����: 2, ��κ���:3, ����:4  >> ";
        cin >> num;
        if (num == 1) input();
        else if (num == 2) erase();
        else if (num == 3) {
            for (int i = 0; i < v.size(); i++) {
                cout << v[i].getName() << endl;
            }
        }
        else if (num == 4) {
            break;
        }
        else {
            cout << "�߸��� ����Դϴ�. �ٽ� �Է��ϼ���." << endl;
        }
    }
}

int main() {
    cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;
    List list;
    list.start();
}
