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
            cout << "����Ʈ�Ͽ����ϴ�." << endl;
            printedCount += pages;
            availableCount -= pages;
            availableInk -= pages;
        }
        else {
            cout << "������ ��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
        }
    }
	void show() {
		cout << showM() << " ," << showMF() << " ,���� ���� " << availableCount << "�� ,���� ��ũ " << availableInk << endl;
	}
};