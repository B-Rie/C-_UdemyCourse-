#include <iostream>

using namespace std;
/* -- Overloading Function --
functions can have the same name but must carry different types of arguments.
The system will know which function to invoke, depending on the arguement type.
*/
int power(int, int);
double power(double, int);

int main() {

	cout << power(2, 3) << endl;	// - int
	cout << power(2.8, 3) << endl;	// - double

	return 0;
}

/////////////////////////////////////////
// 			FUNCTIONS

int power(int b, int e) {
	int tmp = b;
	while(e-- > 1){
		b *= tmp; 
	}
	return b;
}

double power(double b, int e) {
	int tmp = b;
	while(e-- > 1){
		b *= tmp; 
	}
	return b;
}
