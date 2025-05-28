#include <iostream>
#include <string>
#include <map>
using namespace std;

class Cont {
    map<string, int> container;
    int num;
    string name;
    int score;
    string searchName;
public:
    void start() {
        while (true) {
            cout << "삽입:1, 검사:2, 종료:3 >> ";
            cin >> num;
            cin.ignore();
            if (num == 1) {
                input();
            }
            else if (num == 2) {
                cout << "검색할 이름>> ";
                getline(cin, searchName);
                search(searchName);
            }
            else if (num == 3) {
                cout << "프로그램을 종료합니다...." << endl;
                break;
            }
            else
                cout << "잘못된 입력입니다. 다시 입력하세요." << endl;
        }
    }
    void search(string searchName) {
        if (container.find(searchName) != container.end()) {
            cout << searchName << "의 점수는 " << container[searchName] << endl;
        }
        else {
            cout << searchName << "의 점수를 찾을 수 없습니다." << endl;
        }
    }
    void input() {
        cout << "이름과 점수>> ";
        cin >> name >> score;
        container[name] = score;
    }
};

int main() {
    cout << "**** 점수관리 프로그램 HIGH SCORE을 시작합니다 ****" << endl;
    Cont container;
    container.start();
}