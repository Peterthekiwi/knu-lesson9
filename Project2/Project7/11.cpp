#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
    string bookname;
    string writer;
    int year;
public:
    Book(int year, string bookname, string writer) {
        this->year = year;
        this->bookname = bookname;
        this->writer = writer;
    }

    string getWriter() const { return writer; }
    int getYear() const { return year; }

    void info() const {
        cout << year << "�⵵, " << bookname << ", " << writer << endl;
    }
};

int main() {
    vector<Book> v;
    string bookname, writer;
    int year;

    cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;

    while (true) {
        cout << "�⵵>> ";
        cin >> year;
        if (year == -1) {
            cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << endl;
            break;
        }

        cin.ignore(); 
        cout << "å�̸�>> ";
        getline(cin, bookname);
        cout << "����>> ";
        getline(cin, writer);

        v.push_back(Book(year, bookname, writer)); 
    }

    cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>> ";
    cin.ignore();
    getline(cin, writer);

    bool foundWriter = false;
    for (int i = 0; i < v.size(); i++) {
        if (v[i].getWriter().compare(writer) == 0) {
            v[i].info();
            foundWriter = true;
        }
    }
    if (!foundWriter) {
        cout << "�ش� ������ å�� ã�� �� �����ϴ�." << endl;
    }

    cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>> ";
    cin >> year;

    bool foundYear = false;
    for (const auto& book : v) {
        if (book.getYear() == year) {
            book.info();
            foundYear = true;
        }
    }
    if (!foundYear) {
        cout << "�ش� �⵵�� å�� ã�� �� �����ϴ�." << endl;
    }
}