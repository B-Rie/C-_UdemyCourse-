#include <iostream>
#include "test.h"

using namespace std;

void Test::setP(int value){
	*(this->p) = value;
}

void Test::setX(int x){
	this->x = x;
}

void Test::setY(int y){
	this->y = y;
}

Test::Test(int x, int y, int value){
	this->x = x;
	this->y = y;
	this->p = new int(value);
	cout << "CONTRUCTOR Invoked" << endl;
}
Test::Test(const Test &obj){
	this->p = new int(*(obj.p));
	this->x = obj.x;
	this->y = obj.y;
}

Test::~Test(){
	delete  p;

	cout << "DESTRUCTOR Invoked" << endl;
}


// // -- Original Code --
// Test::Test(int x, int y, int value) {
// 	this->x = x;
// 	this->y = y;
// 	this->p = new int(value);
// }


// Test::~Test() {
// 	delete p;
// }

// Test::Test(const Test & obj) {
// 	this->p = new int(*(obj.p));
// 	this->x = obj.x;
// 	this->y = obj.y;
	
// }