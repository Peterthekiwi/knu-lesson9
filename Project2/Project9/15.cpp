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
        cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
        cin >> radius >> name;
        v.push_back(Circle(radius, name));
    }
    void erase() {
        cout << "삭제하고자 하는 원의 이름은 >> ";
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
            cout << "해당 이름의 원을 찾을 수 없습니다." << endl;
        }
    }

};

void List::start() {
    while (true) {
        cout << "삽입:1, 삭제: 2, 모두보기:3, 종료:4  >> ";
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
            cout << "잘못된 명령입니다. 다시 입력하세요." << endl;
        }
    }
}

int main() {
    cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;
    List list;
    list.start();
}
