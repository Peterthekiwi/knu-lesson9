#pragma once
#include "���.h"

class ANDGate :public AbstractGate {
public:
	bool operation() {
		if (x == y)
			return true;
		else
			return false;
	}
};