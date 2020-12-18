#include <iostream>
#include "point.h"

using namespace std;

/* FUNCTION TEMPLATES */

void operationOnPoints();

template<typename T, typename T2> T add(T var1, T2 var2) {
 return var1 + var2;
}

// // - if we can't place a function in the point.ccp or .h
// //     we will use a template specification function
// template<> Point2D add(Point2D var1, Point2D var2) {
//   Point2D tmp;

//   tmp.setX(var1.getX() + var2.getX());
//   tmp.setY(var1.getY() + var2.getY());

//   return tmp;
// }


int main() {
    operationOnPoints();
    return 0;
}

void operationOnPoints() {
    Point2D p1(10, 67);
    Point2D p2(50, 3);

    Point2D sum = add(p1, p2);
    
    cout << sum.getX() << endl;
    cout << sum.getY() << endl;
}


/*
    //  FUNCTION TEMPLATES
    // -- Single Type
    // -- Multiple Types
 

// -- Single Type --
// - general function: two variables that are the same type.
template<typename T> T add(T var1, T var2) { 
    return var1 + var2;
}

// -- Multiple Type --
// - general function: two variables that are the different types.
// - This T1 templ function will be a double, because of the first parameter in main.
template<typename T1, typename T2> T1 add(T1 var1, T2 var2){ 
return var1 + var2;
}


int main() {

    cout << add(2, 5) << endl; // -- Single Type output
    cout << add<double, int>(2, 5.6) << endl; // -- Multiple Type output

    return 0;
}

*/












