#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point { // - Parent
    protected:  // - allows inherited classes to use private variables from Parents
        int x;
    public:
        Point(int = 0);
        ~Point();
        int getX() { return x; }
        void setX(int);
};

class Point2D : public Point { // - Child
    protected:
        int y;
    public:
        Point2D(int = 0, int = 0);  // - setting defualt value for int = 0
        ~Point2D();
        int getY() { return y; }
        void setY(int);
        void setX(int);
        void setXY(int, int);

};

class Point3D : public Point2D{

};

/*
    class Point2D : public Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - protected
    public - public

    class Point2D : protected Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - protected
    public - protected


    class Point2D : private Point
    everything what is inside Point (excluding constructor and destructor) will be in Point2D
    private - CANNOT ACCESS
    protected - private
    public - private

*/
#endif // POINT_H_INCLUDED
