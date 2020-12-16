#include "classes_ppl.h"
#include <iostream>

using namespace std;

// - Functions used for class PersonalData

// - 'this->': points to the actual address of the iINSTANCE class

void PersonalData::setAge(int age) {     // - scope operator
	if (age < 0) 
		this->age = 0;
	else
		this->age = age; 
		// ---	So in (person.setAge(-50);), int age on the SetAge() = (-50) while 'this->age' points 
		//		to the address of private: (short age;) in the PersonalData class.
}

// -- CONSTRUCTOR --
// - sets the default of (age)
PersonalData::PersonalData(){ 
	static int i = 0; // - static means it will only be 0 once
	cout << "Constructor has been INVOKED "<< ++i << endl;
	age = 10;

	p = new int[5];
}

// -- CONSTRUCTOR OVERLOAD--
// - sets the default of (age)
PersonalData::PersonalData(short age){ 
	static int i = 0;
	cout << "Constructor OVERLOAD has been INVOKED "<< ++i << endl;
	this->age = age;
}

// -- DESTRUCTOR --
// - 
PersonalData::~PersonalData(){ 
	static int j = 0; // - static means it will only be 0 once
	cout << "Destructor has been INVOKED "<< ++j << endl;

	delete [] p; // - make sure to delete memeory that is dynamically created in our class
}