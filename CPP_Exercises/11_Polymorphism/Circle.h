#ifndef CIRCLE_H_INCLUDED
#define CIRLCLE_H_INCLUDED
#include "Shape.h"
#include <iostream>

using namespace std;

class Circle : public Shape{
		double radius;
	public:
		Circle(double);
		~Circle();
		void introduce();
		double calculateArea();
		double calculateCircumference();
};


#endif