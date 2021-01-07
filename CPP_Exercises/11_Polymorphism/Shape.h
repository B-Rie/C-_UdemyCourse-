#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#include <iostream>

using namespace std;

class Shape{

	public:
		//// -- Exercise 2 --
		//  ~Shape(){ cout << "Shape Destructor!" << endl;};

		//// -- Exercise 3 --
		virtual ~Shape(){ cout << "Shape Destructor!" << endl;};
		
		virtual void introduce() = 0;
		virtual double calculateArea() =0;
		virtual double calculateCircumference() = 0;
};


#endif