#include <iostream>

using namespace std;

/* DATA STRUCTURE: a group of data elements that are connected to eachother */

struct personalData {
	string name;
	string surname;
	string phone;
	short age;
}a,b;

void test(personalData*);


int main() {
	personalData person[3]; // - an array of 5 people
	a.age = 50;

	cout << a.age << endl;
	// - assigning values to new types
	person[0].name = "Brian";
	person[1].name = "Will";		// - created new person
	person[0].surname = "Ortiz";
	person[0].phone = "1233214123";
	person[0].age = 22;

	cout << person[0].name << endl;
	cout << person[0].surname << endl;
	cout << person[0].phone << endl;
	cout << person[0].age << endl;
	cout << person[1].name << endl;

	cout << endl << " -- Pointers --" << endl;
	cout << (*person).name << endl;				// verzion1 - op: Brian
	cout << (*&person[0]).name << endl;			// verzion2 - op: Brian
	cout << person->name << endl;				// verzion2 - op: Brian
	cout << (*(person+1)).name << endl;			// op: Will

	cout << endl << " -- Test --" << endl;
	personalData *p = &person[0];

	cout << p->name << endl;					// op: Brian

	test(p);
	cout << p->name << endl;					// op: Fred (the function changed the original value)
	cout << (*person).name << endl;	

return 0;
}

void test(personalData *person) {
	person->name = "Fred";
}