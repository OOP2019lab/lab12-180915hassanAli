#pragma once
#include <string>

class shape{
public:
	shape(std::string color,std::string type);
	virtual ~shape();
	virtual float area();

	std::string color;
private:
	std::string type;
};