#pragma once
#include "���.h"

class ORGate :public AbstractGate {
public:
	bool operation() {
		if (x == true or y == true) {
			return true;
		}
		else
			return false;
	}
};