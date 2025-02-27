#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point {   // Parent
    protected:
        int x;
    public:
        Point(int =0);
        ~Point();
        int getX() { return x; }
        void setX(int);
};

class Point2D : public Point { // - child
    protected:
        int y;
    public:
        Point2D(int = 0, int = 0);
        ~Point2D();
        int getY() { return y; }
        void setY(int);
        void setX(int);
        void setXY(int, int);
        Point2D operator+(Point2D); // - operator to use templ

};

class Point3D : public Point2D {

};

#endif // POINT_H_INCLUDED
