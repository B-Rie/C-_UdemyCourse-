#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(double width, double height){
	this->width = width;
	this->height =height;
}

Rectangle::~Rectangle(){
	cout << "Rectangle Destructor!" << endl;
}

void Rectangle::introduce(){
	cout << "I am a Rectangle!" << endl;
}

double Rectangle::calculateArea(){
	return width*height;
}

double Rectangle::calculateCircumference(){
	return 2*(width+height);
}