#pragma once
#include "shape.h"
#include <string>

class triangle:public shape{
public:
	triangle(std::string color, float height,float width);
	~triangle();
	float area();

private:
	float height;
	float base;
};
