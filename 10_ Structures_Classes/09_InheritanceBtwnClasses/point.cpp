#include <iostream>
#include "point.h"

using namespace std;

Point::Point(int x){
    this->x = x;
    cout << "Point class CONSTRUCTOR: INVOKED" << endl;
}
Point::~Point(){
    cout << "Point class DECONSTRUCTOR: INVOKED" << endl;
}
void Point::setX(int x){
    this->x = x;
    cout << "Im from Point" << endl;
}

// -- CHILD CLASSES --
Point2D::Point2D(int x, int y) : Point(x){
    this->y = y;
    cout << "Point2D class CONSTRUCTOR: INVOKED" << endl;
}
Point2D::~Point2D(){
    cout << "Point2D class DECONSTRUCTOR: INVOKED" << endl;
}
void Point2D::setY(int y){
    this->y = y;
}
void Point2D::setXY(int x, int y){
    setX(x);
    setY(y);

    // // -- do not use: 
    // this->x = x;
    // this->y = y;

}
void Point2D::setX(int x){
    this->x = x;
    cout << "Im from Point2D" << endl;
}
