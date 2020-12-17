#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED

class Test{
	private:
		int x;
		int y;
		int *p;
	public:
		// int *p;		
		Test(int, int, int);
		Test(const Test &);
		~Test();
		void setX(int);
		void setY(int);
		void setP(int);
		int getP() { return *p;}
		short getX() { return x;}
		short getY() { return y;}
};


#endif


// // -- Original Code --
// class Test {
// 	public:
// 		int x;
// 		int y;
// 		int *p;
// 		Test (const Test &);
// 		Test (int, int, int);
// 		~Test();
// };