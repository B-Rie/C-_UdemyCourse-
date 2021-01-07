#include "Circle.h"
#include <iostream>
#define PI 3.14

using namespace std;

Circle::Circle(double radius){
	this->radius = radius;
}
Circle::~Circle(){
	cout << "Circle Destructor!" << endl;
}

void Circle::introduce(){
	cout << "I am a Cirlce!" << endl;
}

double Circle::calculateArea(){
	return PI*radius*radius;
}

double Circle::calculateCircumference(){
	return 2*PI*radius;
}