#include "circle.h"
#include <iostream>


circle::circle(std::string color, float radius):shape(color,"circle"),radius(radius){
	std::cout<<"constructor of circle\n";
};

circle::~circle(){
	std::cout<<"destructor of circle\n";
}

float circle::area(){
	return 3.142*radius*radius;
};
