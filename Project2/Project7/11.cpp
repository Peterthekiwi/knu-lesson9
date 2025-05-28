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
        cout << year << "년도, " << bookname << ", " << writer << endl;
    }
};

int main() {
    vector<Book> v;
    string bookname, writer;
    int year;

    cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;

    while (true) {
        cout << "년도>> ";
        cin >> year;
        if (year == -1) {
            cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;
            break;
        }

        cin.ignore(); 
        cout << "책이름>> ";
        getline(cin, bookname);
        cout << "저자>> ";
        getline(cin, writer);

        v.push_back(Book(year, bookname, writer)); 
    }

    cout << "검색하고자 하는 저자 이름을 입력하세요>> ";
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
        cout << "해당 저자의 책을 찾을 수 없습니다." << endl;
    }

    cout << "검색하고자 하는 년도를 입력하세요>> ";
    cin >> year;

    bool foundYear = false;
    for (const auto& book : v) {
        if (book.getYear() == year) {
            book.info();
            foundYear = true;
        }
    }
    if (!foundYear) {
        cout << "해당 년도의 책을 찾을 수 없습니다." << endl;
    }
}