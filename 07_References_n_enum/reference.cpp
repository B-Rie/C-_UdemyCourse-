#include <iostream>
using namespace std;

void increment(int&);
int&  swap(int&, int&);


int main() {
	int a = 5;
	increment(a);
	cout << a << endl;

	int b = 10;
	int c = 20;

	int& d = swap(b, c);
	d = 100;


	cout << "b: " << b << endl;
	cout << "c: " << c << endl;
	cout << "d: " << d << endl;

	return 0;
}

void increment(int& value){
	value++;
}

int& swap (int &x, int &y){
	int t;
	t = x;
	x = y;
	y = t;

	return x;
}