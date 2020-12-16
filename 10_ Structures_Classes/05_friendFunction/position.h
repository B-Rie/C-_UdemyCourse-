#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

class Position {
	// - no need to write private
		int x, y;
	public:
		Position(int, int);
		~Position();
		void getPosition() const;
		void setPosition(int, int);
		//void setX(Position, int);		// - without friend function, the variable x is private an can't be accessed from main.ccpp
		friend void setX(Position &, int);// -- This tells the class that this function is a friend

};

#endif // USER_H_INCLUDED