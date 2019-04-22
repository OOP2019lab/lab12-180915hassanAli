#include "shape.h"
#include <iostream>

shape::shape(std::string color,std::string type):color(color),type(type){
	std::cout<<"constructor of shape called\n";
};

float shape::area(){ return 0;};

shape::~shape(){
	std::cout<<"destructor of shape called\n";
};