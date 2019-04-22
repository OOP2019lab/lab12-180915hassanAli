#include "shape.h"
#include "circle.h"
#include "triangle.h"
#include "rectangle.h"


#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

float sumArea(shape& s1,shape& s2){
	return s1.area()+s2.area();
}

void ShapeArray(){
	int count= 5;
	shape **shapesArray=new shape*[count];
	for(int i=0; i<count;)
	{
  		cout << "Press 1 for a triangle, 2 for rectangle and 3 for a circle." << endl;
		string color;
  		switch (getch())
  		{
        		case '1':
					int base,height;
					cout<<"input base and height of triangle: ";
					cin>>base>>height;
					cout<<"input color: ";
					cin>>color;
					shapesArray[i]=new triangle(color,height,base);
                    i++;
              		break;
        		case '2':
                    int lenght,width;
					cout<<"input lenght and width of rectangle: ";
					cin>>lenght>>width;
					cout<<"input color: ";
					cin>>color;
					shapesArray[i]=new rectangle(color,lenght,width);
                    i++;
              		break;
 
        		case '3':
              		int radius;
					cout<<"input radius: ";
					cin>>radius;
					cout<<"input color: ";
					cin>>color;
					shapesArray[i]=new circle(color,radius);
                    i++;
              		break;
 
   	 		default:
              		cout<<"Invalid input. Enter again." <<endl<<endl;
              		break;
		}
	}
	for (int c=0;c<count;++c){
		cout<<shapesArray[c]->area()<<endl;
	}


	for (int c=0;c<count;++c){
		delete shapesArray[c];
	}
	delete shapesArray;
}

int main(){
	triangle t1("Red",1.0,9.0);
	circle c1("Blue",2.0);
	rectangle r1("Orange",6.0,2.0);
	cout<<t1.area()<<endl;
	cout<<t1.color<<endl;
	cout<<c1.area()<<endl;
	cout<<r1.area()<<endl;
	
	cout<<"\n\n\n";

	shape *sptr1= &t1;
	shape &sref=r1;
	cout<< sptr1->area()<<endl;
	cout<< sptr1->color<<endl;
	cout<< sref.color<<endl;
	cout<< sref.area()<<endl;

	cout<<"\n\n\n";
	shape s1("Purple","big");

	cout<<sumArea(t1,c1)<<endl;
	cout<<sumArea(s1,r1)<<endl;
	cout<<sumArea(s1,t1)<<endl;


	ShapeArray();

	system("pause");
}