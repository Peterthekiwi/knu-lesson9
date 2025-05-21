#pragma once
#include "shape.h"

class Oval :public Shape {
public:
	Oval(string name, int width, int height) :Shape(name, width, height) {}
	double getArea() {
		return width * height * 3.14;
	}
};