#include <iostream>
#include "position.h"

using namespace std;
/* STATIC PROPERTIES and STATIC METHODS */
void setX(Position &, int);

int main() {
	Position dog(10, 50);

	dog.getPosition();
	setX(dog, 1500);					// - to change the value, we nee to include & in setX()
	dog.getPosition();

	const Position house(100, 200);		//- because house is a const, the methods from the poition.h have to be const as well

	house.getPosition();				
	// house.setPosition(444, 444);		// - error: 
	// house.getPosition();

	return 0;
}

void setX(Position &obj, int value) {
	obj.x = value;		
}