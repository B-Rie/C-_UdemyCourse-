#include <iostream>

using namespace std;

int main() {
	
	int amount;

	cout << "How mnay numbers would you like to store in an array?" << endl;
	cin >> amount;

	int *p = new (nothrow) int[amount]; // new: will return a address locates reserved for p

	if (p != NULL) {	// - checks to verify memory was allocated to p
		for (int i  = 0; i < amount; i++) {
			cout << "Enter the " << (i+1) << " number: " << endl;
			cin >> p[i];
		}
		for (int i = 0; i < amount; i++) {
			cout << "p [ " << i << " ] = " << p[i] << endl;
		}
	} else {
		cout << "Not enough memory " << endl;
	}

	delete []p;	// - clears/ releases memory when programs ends
	return 0;
}