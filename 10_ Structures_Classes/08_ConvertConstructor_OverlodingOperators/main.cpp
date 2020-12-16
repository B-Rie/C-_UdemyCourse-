#include <iostream>
#include "integer.h"

using namespace std;

int main() {

	Integer a(60);

	int b = (int)a; // - casting: Integer a  -->  int a  // explicit way
	// int b = a; // implicit way
	a = 100;

	cout << a.getNr() << endl;
	cout << b << endl;

	//cout << a + b << endl; // WORKS

	a+=b;
	cout << a.getNr() << endl; // 
	return 0;
}