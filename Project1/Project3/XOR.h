#pragma once
#include "Çì´õ.h"

class XORGate :public AbstractGate {
public:
	bool operation() {
		if (x != y) {
			return true;
		}
		else
			return false;
	}
};