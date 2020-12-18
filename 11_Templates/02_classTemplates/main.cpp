#include <iostream>
#include "point.h"

using namespace std;

/* CLASS TEMPLATES */

void operationOnPoints();

/////////////////////////////////////
// --- TEMPLATES ---
template<typename T, typename T2> T add(T var1, T2 var2) {
 return var1 + var2;
}


typedef Point<int> PointInt;



int main() {
    operationOnPoints();

    return 0;
}


/////////////////////////////////////
// --- FUNCTIONS ---
void operationOnPoints() {
    //Point<int> a(5);          // -n make sure to specify the T by <int>
    PointInt a(5);
    Point2D<double> b(10.5, 9);

    cout << a.getX() << endl;
    cout << b.getX() << endl;
}