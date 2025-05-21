#pragma once
#include "printer.h"

class InkJetPrint :public Printer {
	int availableInk;
public:
	InkJetPrint(string model, string manufacturer, int availableCount, int availableInk) :Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}
    void print(int pages) {
        if (availableCount >= pages && availableInk >= pages) {
            cout << "프린트하였습니다." << endl;
            printedCount += pages;
            availableCount -= pages;
            availableInk -= pages;
        }
        else {
            cout << "용지나 잉크가 부족하여 프린트할 수 없습니다." << endl;
        }
    }
	void show() {
		cout << showM() << " ," << showMF() << " ,남은 종이 " << availableCount << "장 ,남은 잉크 " << availableInk << endl;
	}
};