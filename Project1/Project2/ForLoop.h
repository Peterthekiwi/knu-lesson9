#pragma once
#include "Çì´õ.h"

class ForLoopAdder :public LoopAdder {
public:
	ForLoopAdder(string name):LoopAdder(name){}
	int calculate() {
		int sum = 0;
		int x = getX();
		int y = getY();
		for (x; x < y + 1; x++) {
			sum += x;
		}
		return sum;
	}
};