#include <iostream>
#include "test.h"

using namespace std;
/* COPY CONSTRUCTOR */

int main() {

	Test obj1(50, 100, 20);
	Test obj2 = obj1;

	obj2.setX(200);

	obj1.setP(700);
	
	cout << "obj1.x = " << obj1.getX() <<endl;
	cout << "obj1.y = " << obj1.getY() <<endl;
	cout << "obj1.p = " << obj1.getP()<<endl;

	cout << "obj2.x = " << obj2.getX() <<endl;
	cout << "obj2.y = " << obj2.getY() <<endl;
	cout << "obj2.p = " << obj2.getP()<<endl;

	return 0;
}

// // -- Original Code --

	// Test obj1(50, 100, 12);
	// Test obj2 = obj1;

	// obj2.x = 200;
	// *(obj1.p) = 700;

	// cout << "obj1.x " << obj1.x << endl;
	// cout << "*(obj1.p) " << *(obj1.p) << endl;
	// cout << "*obj1.y  " << obj1.y << endl << endl;

	// cout << "obj2.x " << obj2.x << endl;
	// cout << "*(obj2.p) " << *(obj2.p) << endl;
	// cout << "*obj2.y  " << obj2.y << endl << endl;