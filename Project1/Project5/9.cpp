#include "printer.h"
#include "ink.h"
#include "lay.h"

int main() {
	Printer* a[2];
	a[0] = new InkJetPrint("OfficeJet V40", "HP", 5, 10);
	a[1] = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
	cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
	cout << "잉크젯 : ";
	a[0]->show();
	cout << "레이저 : ";
	a[1]->show();

	while (true) {
		cout << endl << endl;
		int select, count;
		string YN;
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> select >> count;
		if (select == 1) {
			a[0]->print(count);
			a[0]->show();
			a[1]->show();
		}
		else if (select == 2) {
			a[1]->print(count);
			a[0]->show();
			a[1]->show();
		}
		else
			cout << "1번과 2번으로 프린터 종류를 입력해 주세요" << endl;
		while (true) {
			std::cout << "계속 프린트 하겠습니까(y/n)? ";
			std::cin >> YN;

			if (YN == "n") {
				return 0;
			}
			else if (YN == "y") {
				break;
			}
			else {
				std::cout << "잘못된 입력입니다. 'y' 또는 'n'을 입력하세요.\n";
			}
		}
	}
}