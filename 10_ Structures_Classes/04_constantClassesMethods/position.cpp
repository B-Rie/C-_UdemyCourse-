#include <iostream>
#include "position.h"

using namespace std;

Position::Position(int x, int y){
	this->x = x;
	this->y = y;
}

Position::~Position(){

}

void Position::getPosition() const { // - const will reassure that this function cannot mofity the Position Class
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}

void Position::setPosition(int x, int y){	// - Since this function modifies the Position Class, Const House can not use
	this->x = x;
	this->y = y;
}