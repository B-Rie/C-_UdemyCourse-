#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>

using namespace std;

template<typename T>
class Point {   // Parent
    protected:
        T x;
    public:
        Point(T = 0);
        ~Point();
        T getX() { return x; } // - Here we can always change the datatype: int, double T, float
        void setX(T);
};

template<typename T>
Point<T>::Point(T x) {
    this->x = x;
    cout << "Point class CONSTRUCTOR: INVOKED" << endl;
}
template<typename T>
Point<T>::~Point() {
    cout << "Point class DESTRUCTOR: INVOKED" << endl;
}
template<typename T>
void Point<T>::setX(T x) {
    this->x = x;
    cout << "Im from Point" << endl;
}

////////////////////////////////////
// -- POINT2D --
template<typename T>
class Point2D : public Point<T> { // - child
    protected:
        T y;
    public:
        Point2D(T = 0, T = 0);
        ~Point2D();
        T getY() { return y; }
        void setY(T);
        void setX(T);
        void setXY(T, T);
        Point2D operator+(Point2D); // - operator to use templ
};

template<typename T>
Point2D<T>::Point2D(T x, T y) : Point<T>(x) {
    this->y = y;
    cout << "Point2D class CONSTRUCTOR: INVOKED" << endl;
}
template<typename T>
Point2D<T>::~Point2D() {
    cout << "Point2D class DESTRUCTOR: INVOKED" << endl;
}
template<typename T>
void Point2D<T>::setY(T y) {
    this->y = y;
}
template<typename T>
void Point2D<T>::setXY(T x, T y) {
    setX(x);
    setY(y);
}
template<typename T>
void Point2D<T>::setX(T x) {
    this->x = x;
    cout << "Im from Point2D" << endl;
}
template<typename T>
Point2D<T> Point2D<T>::operator+(Point2D o) {
    Point2D tmp;

    tmp.setX(this->getX() + o.getX());
    tmp.setY(this->getY() + o.getY());

    return tmp;
}



#endif // POINT_H_INCLUDED
