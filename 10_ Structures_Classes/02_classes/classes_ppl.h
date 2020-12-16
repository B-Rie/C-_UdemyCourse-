#ifndef CLASSES_PPL_H_INCLUDED
#define CLASSES_PPL_H_INCLUDED

class PersonalData {
	private:
		short age;
		// - dynamically
		int *p;

	public: 
		PersonalData();		// -- CONSTRUCTOR --
		PersonalData(short);		// -- CONSTRUCTOR OVERLOAD --
		~PersonalData();	// -- DESTRUCTOR --
		
		/** this function is setting age if age is less than 0, age = 10
		*/
		void setAge(int); // - (int value), since this is the prototype, we don't need to specify the name of the int
		short getAge() {return age;}
		
};

#endif // PEOPLE_H_INCLUDED

/*	Constructors:	- contruct our objects. Defines values like age when we create an object.
					- does not return anything. Looks like (classNAME();)
	Destructors:

*/