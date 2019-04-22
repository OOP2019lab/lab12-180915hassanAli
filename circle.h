#pragma once
#include "shape.h"
#include <string>

class circle:public shape{
public:
	circle(std::string color, float radius);
	~circle();
	float area();
private:
	float radius;
};
