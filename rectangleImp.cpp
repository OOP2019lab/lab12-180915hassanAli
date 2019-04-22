#include "rectangle.h"
#include <iostream>


rectangle::rectangle(std::string color, float height,float width):shape(color,"rectangle"),height(height),width(width){
	std::cout<<"constructor of rectangle\n";
};

rectangle::~rectangle(){
	std::cout<<"destructor of rectangle\n";
}

float rectangle::area(){
	return height*width;
};