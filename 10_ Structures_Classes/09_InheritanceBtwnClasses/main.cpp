#include <iostream>
#include "point.h"

using namespace std;
/* inheritance between classes */

void operationOnPoints();

int main(){
    operationOnPoints();

    return 0;
}

void operationOnPoints(){
    Point2D p2(10, 67);

    // p2.setX(49);		// - from POINT2D
    p2.Point::setX(5);	// - accessing the setX() from POINT

    cout << p2.getX() << endl;
    cout << p2.getY() << endl;
}
