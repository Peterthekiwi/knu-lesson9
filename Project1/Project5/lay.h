#pragma once
#include "printer.h"

class LaserPrinter :public Printer {
	int availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) :Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}
    void print(int pages) {
        if (availableCount >= pages && availableToner >= pages) {
            cout << "����Ʈ�Ͽ����ϴ�." << endl;
            printedCount += pages;
            availableCount -= pages;
            availableToner -= 1;
        }
        else {
            cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
        }
    }
	void show() {
		cout << showM() << " ," << showMF() << " ,���� ���� " << availableCount << "�� ,���� ��� " << availableToner << endl;
	}
};