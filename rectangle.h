#pragma once
#include "shape.h"
#include <string>

class rectangle:public shape{
public:
	rectangle(std::string color, float height,float width);
	~rectangle();
	float area();

private:
	float height;
	float width;
};
