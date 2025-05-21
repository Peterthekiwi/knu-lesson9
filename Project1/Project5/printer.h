#pragma once
#include <iostream>
using namespace std;

class Printer {
	string model;
	string manufacturer;
protected:
	int availableCount;
	int printedCount;
public:
	Printer(string model = "", string manufacturer = "", int availableCount = 0) {
		this->model = model; this->manufacturer = manufacturer; this->availableCount = availableCount;
		printedCount = 0;
	}
	virtual void print(int pages) = 0;
	virtual void show() = 0;
	string showM() { return model; }
	string showMF() { return manufacturer; }
	int showP() { return printedCount; }
};