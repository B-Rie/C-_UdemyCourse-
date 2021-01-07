#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Shape.h"
#include <iostream>

using namespace std;

class Rectangle : public Shape{
		double width;
		double height;
	public:
		Rectangle(double w = 0, double h = 0);
		~Rectangle();
		void introduce();
		double calculateArea();
		double calculateCircumference();
};


#endif