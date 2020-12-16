#include <iostream>
#include "user.h"

using namespace std;
/* STATIC PROPERTIES and STATIC METHODS */

int main() {

	// User a;
	// User b;

	// cout << a.getID() << endl;
	// cout << b.getID() << endl;
	cout << User::getCounter() << endl; // - counter starting at 0

	User a[10];							// - counter now goes up to 10
	cout << a[3].getID() << endl;
	cout << a[5].getID() << endl;
	cout << User::getCounter() << endl; // - counter only went to 10


	return 0;
}