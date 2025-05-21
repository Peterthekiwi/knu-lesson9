#pragma once
#include "shape.h"

class Triangular :public Shape {
public:
	Triangular(string name, int width, int height) : Shape(name, width, height) {};
	double getArea() {
		return height * width / 2;
	}
};