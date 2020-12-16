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

};

#endif // USER_H_INCLUDED