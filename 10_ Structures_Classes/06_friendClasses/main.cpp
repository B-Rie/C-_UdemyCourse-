#include <iostream>
#include "test.h"

using namespace std;

int main() {
	B objB;
	A objA;

	objA.setSecretValue(objB, 400);

	cout << objB.getSecretValue() << endl;

	return 0;
}