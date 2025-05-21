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
            cout << "프린트하였습니다." << endl;
            printedCount += pages;
            availableCount -= pages;
            availableToner -= 1;
        }
        else {
            cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
        }
    }
	void show() {
		cout << showM() << " ," << showMF() << " ,남은 종이 " << availableCount << "장 ,남은 토너 " << availableToner << endl;
	}
};