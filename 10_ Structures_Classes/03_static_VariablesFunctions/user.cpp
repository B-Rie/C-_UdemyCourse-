#include <iostream>
#include "user.h"

using namespace std;

int User::counter = 0; // - Initlaizing the static variable 

User::User() {
	counter++;
	ID = counter;
	cout << "ID: " << ID << endl;
}

User::~User() {

}
