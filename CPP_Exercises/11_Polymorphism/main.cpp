/*

EXERCISE - STEP1

Create an abstract class Shape with three virtual methods: introduce(), calculateArea()
calculateCircumference(). Create two classes: "Rectangle" and "Circle" that inherit from
the Shape class. Develop the implementation of the virtual methods from the Shape class so:

void introduce() - prints out in the console: "I am a Rectangle!" or "I am a Circle!"
double calculateArea() - returns the Area of the shape
double calculateCircumference() - returns the circumference of the shape

Think about the member variables needed for each of the derived classes.
In the main function create three functions: introduceShape(), calculateShapeArea() and
calculateShapeCircumference(). All three of those methods should take as the argument a 
polymorphic pointer to the Shape type and invoke the corresponding function from the sent
shape. Create at least one object for both Rectangle and Circle and send their addresses
to invoke those functions. Print out in the console the results like in example below:

eg.
I AM A RECTANGLE !
My area is: 10, my circumference is: 14

I AM A CIRCLE !
My area is: 28.26, my circumference is: 18.84

EXERCISE - STEP2

Redefine the Shape, Rectangle and Circle classes destructors. Add inside of them simple message:
Shape - "Shape destructor!", Rectangle - "Rectangle destructor!", Circle - "Circle destructor!".
And build the program to check when the destructors get invoked.

eg.
I AM A RECTANGLE !
My area is: 10, my circumference is: 14

I AM A CIRCLE !
My area is: 28.26, my circumference is: 18.84

Circle destructor !
Shape destructor !
Rectangle destructor !
Shape destructor !

Next, allocate the memory dynamically to create the rectangle and circle object. However, 
they should be allocated as Shape* pointers eg: (Shape* rectangle1 = new Rectangle(2,3)).
Remember to free the allocated addresses at the end of the main and look at the output:

eg.
I AM A RECTANGLE !
My area is: 10, my circumference is: 14

I AM A CIRCLE !
My area is: 28.26, my circumference is: 18.84

Shape destructor !
Shape destructor !

As you can see in the example presented, only the Shape destructor was invoked ! But we have
reserved the memory for a Rectangle and a Cricle. Now all the memory that was allocated for
additional member variables and member functions from Rectangle and Circle will not be deallocated
and you have a leak in your program. Create a virtual destructor for the Shape class to free
all of the memory allocated.

eg.

I AM A RECTANGLE !
My area is: 10, my circumference is: 14

I AM A CIRCLE !
My area is: 28.26, my circumference is: 18.84

Rectangle destructor !
Shape destructor !
Circle destructor !
Shape destructor !

*/

#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"

#include <iostream>

using namespace std;

///////////////////////////////////
//	--- Function Declaration ---
void introduceShape(Shape *);
double calculateShapeArea(Shape *);
double calculateShapeCircumference(Shape *);


int main(){
	//////////////////////////
	//// -- Exercise 1 --
	// Rectangle rect(3,2);
	// Circle circ(3);

	// introduceShape(&rect);
	// cout << "My area is: " << calculateShapeArea(&rect) << " , my circumference is: " << calculateShapeCircumference(&rect) << endl;

	// introduceShape(&circ);
	// cout << "My area is: " << calculateShapeArea(&circ) << " , my circumference is: " << calculateShapeCircumference(&circ) << endl;
	//////////////////////////

	//////////////////////////
	//// -- Exercise 2 --
	Shape *rect = new Rectangle(2,3);
	Shape *circ = new Circle(3);

	introduceShape(rect);
	cout << "My area is: " << calculateShapeArea(rect) << " , my circumference is: " << calculateShapeCircumference(rect) << endl;

	introduceShape(circ);
	cout << "My area is: " << calculateShapeArea(circ) << " , my circumference is: " << calculateShapeCircumference(circ) << endl;
	//////////////////////////

	delete rect;
	delete circ;

	return 0;
}

///////////////////////////////////
//	--- Functions ---
void introduceShape(Shape *name){
	return name->introduce();
}

double calculateShapeArea( Shape *area){
	return area->calculateArea();
}

double calculateShapeCircumference(Shape *circumference){
	return circumference->calculateCircumference();
}