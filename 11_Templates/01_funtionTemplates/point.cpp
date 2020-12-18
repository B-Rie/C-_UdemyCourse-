#include <iostream>
#include "point.h"


using namespace std;

Point::Point(int x) {
    this->x = x;
    cout << "Point class CONSTRUCTOR: INVOKED" << endl;
}
Point::~Point() {
    cout << "Point class DESTRUCTOR: INVOKED" << endl;
}
void Point::setX(int x) {
    this->x = x;
    cout << "Im from Point" << endl;
}
// -- POINT2D --
Point2D::Point2D(int x, int y) : Point(x) {
    this->y = y;
    cout << "Point2D class CONSTRUCTOR: INVOKED" << endl;
}
Point2D::~Point2D() {
    cout << "Point2D class DESTRUCTOR: INVOKED" << endl;
}
void Point2D::setY(int y) {
    this->y = y;
}
void Point2D::setXY(int x, int y) {
    setX(x);
    setY(y);
}
void Point2D::setX(int x) {
    this->x = x;
    cout << "Im from Point2D" << endl;
}
Point2D Point2D::operator+(Point2D o) {
    Point2D tmp;

    tmp.setX(this->getX() + o.getX());
    tmp.setY(this->getY() + o.getY());

    return tmp;

}