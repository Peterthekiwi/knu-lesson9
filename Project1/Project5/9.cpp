#include "printer.h"
#include "ink.h"
#include "lay.h"

int main() {
	Printer* a[2];
	a[0] = new InkJetPrint("OfficeJet V40", "HP", 5, 10);
	a[1] = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����." << endl;
	cout << "��ũ�� : ";
	a[0]->show();
	cout << "������ : ";
	a[1]->show();

	while (true) {
		cout << endl << endl;
		int select, count;
		string YN;
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
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
			cout << "1���� 2������ ������ ������ �Է��� �ּ���" << endl;
		while (true) {
			std::cout << "��� ����Ʈ �ϰڽ��ϱ�(y/n)? ";
			std::cin >> YN;

			if (YN == "n") {
				return 0;
			}
			else if (YN == "y") {
				break;
			}
			else {
				std::cout << "�߸��� �Է��Դϴ�. 'y' �Ǵ� 'n'�� �Է��ϼ���.\n";
			}
		}
	}
}