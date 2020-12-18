#include <iostream>

using namespace std;

/* Exeptions: 

*/

int main() {

	int a = 5;

	try {
		a *= 10;

		if (a == 50){
			throw a;
		}

		cout << "Other instructions ...." << endl;
	}
	catch ( int a){
		cout << " A cannot equal " << a << endl;
	}

	return 0;
}