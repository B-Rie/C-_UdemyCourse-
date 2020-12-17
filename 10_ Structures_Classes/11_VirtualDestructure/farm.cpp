#include "farm.h"


Animal::Animal() {
	voice = "default value";
}
Animal::~Animal() {
	cout << "Animal class DESTRUCTOR" << endl;
}

Dog::Dog(){
    sign = "D";
    voice = "hau";
}
Dog::~Dog() { cout << "Dog class DESTRUCTOR" << endl; }

Cat::Cat(){
    sign = "C";
    voice = "meow";
}
Cat::~Cat() { cout << "Cat class DESTRUCTOR" << endl; }

Cow::Cow(){
    sign = "CO";
    voice = "moooo";
}
Cow::~Cow() { cout << "Cow class DESTRUCTOR" << endl; }
