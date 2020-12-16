#include <iostream>
#include "position.h"

using namespace std;
/* STATIC PROPERTIES and STATIC METHODS */

int main() {
	Position dog(10, 50);

	dog.getPosition();
	dog.setPosition(50, 100);
	dog.getPosition();

	const Position house(100, 200);		// - 

	house.getPosition();				// - 
	// house.setPosition(444, 444);		// - error: 
	// house.getPosition();

	return 0;
}