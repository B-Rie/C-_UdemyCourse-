#ifndef INTEGER_H_INCLUDED
#define INTEGER_H_INCLUDED

class Integer{

		int nr;
	public:
		Integer() { };
		Integer(int); //CONVERT Constructor
		operator int();
		int operator+=(Integer);
		int getNr() { return nr; };
};

#endif