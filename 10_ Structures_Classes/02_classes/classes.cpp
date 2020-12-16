#include <iostream>
#include "classes_ppl.h"

using namespace std;

/* CLASSES: adding multiple classes to the main.cpp can become overcrowded. So we will place these class function 
			in another fil and link to it using a .h file. */
/*
class PersonalData {
	private:
		short age;
	public:
		// - set and get functions have to be created to gain access to the private variables in the class
		void setAge(int value){ // - function pototype
			if(value < 0){ 		// - function declaration
				age=0; 
			}else{ 
				age=value; 
			} 
		}
		short getAge(){ return age; }
}; */

void test() { 
	// PersonalData person[5];
	PersonalData *pointer = new PersonalData[5]; // - only constructor is invoked
	// - so
	delete [] pointer; // - now destructor in invoked to free the memory
}

int main(){
	// // - commented out because of destructor test
	// // PersonalData person;
	// // PersonalData person2;

	// // // - commented out because of the use of the CONSTRUCTOR in classes_ppl.cpp
	// // // person.setAge(-50);
	// // // person2.setAge(21);

	// // cout << "person age: " << person.getAge() << ". person2 age: " << person2.getAge() << endl;

	// test();

	// - this is for Constructor OVERLOAD
	PersonalData person(10);
	PersonalData person2(20);

	cout << "person age: " << person.getAge() << ". person2 age: " << person2.getAge() << endl;

	return 0;
}