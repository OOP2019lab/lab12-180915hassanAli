#include "triangle.h"
#include <iostream>


triangle::triangle(std::string color, float height,float width):shape(color,"triangle"),height(height),base(width){
	std::cout<<"constructor of triangle\n";
};

triangle::~triangle(){
	std::cout<<"destructor of triangle\n";
}

float triangle::area()
{
		return height*base/2;
};