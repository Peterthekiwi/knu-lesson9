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
            cout << "����:1, �˻�:2, ����:3 >> ";
            cin >> num;
            cin.ignore();
            if (num == 1) {
                input();
            }
            else if (num == 2) {
                cout << "�˻��� �̸�>> ";
                getline(cin, searchName);
                search(searchName);
            }
            else if (num == 3) {
                cout << "���α׷��� �����մϴ�...." << endl;
                break;
            }
            else
                cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���." << endl;
        }
    }
    void search(string searchName) {
        if (container.find(searchName) != container.end()) {
            cout << searchName << "�� ������ " << container[searchName] << endl;
        }
        else {
            cout << searchName << "�� ������ ã�� �� �����ϴ�." << endl;
        }
    }
    void input() {
        cout << "�̸��� ����>> ";
        cin >> name >> score;
        container[name] = score;
    }
};

int main() {
    cout << "**** �������� ���α׷� HIGH SCORE�� �����մϴ� ****" << endl;
    Cont container;
    container.start();
}