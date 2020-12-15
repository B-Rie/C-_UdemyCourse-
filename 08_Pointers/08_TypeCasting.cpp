#include <iostream>
#include <ctime>  

using namespace std;

void lottery (int, int);

int main() {

	double var = 5.6;
	int a = 6;
	int b = 7;
	cout << (double)a/b << endl;

	cout << (int) var << endl;		// -Explicit way C

	int x = 444;
	short y = x;					// -Implicit way of casting

	cout << y << endl;

	cout << (int)var << endl;				// -explicit way C
	cout << static_cast<int>(var) << endl;	// explicit way C++

	char ch;

	cin >> ch;

	cout << (int)ch << endl;
	return 0;
}