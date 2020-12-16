#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

class User {
	// - no need to write private
		int ID;
		static int counter; // - counter needs to be initalized in the user.cpp file
	public:
		User();
		~User();
		int getID() { return ID; }
		static int getCounter() { return counter; }

};

#endif // USER_H_INCLUDED