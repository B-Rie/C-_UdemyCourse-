#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <fstream>


using namespace std;

/////////////////////////////
// -- STRUCTURES --
struct Person {
	string name;
	string surname;
	short age;
	string telephone;

};

short peopleInDatabase;
Person people[20];


/////////////////////////////
// -- DECLARING FUNCTIONS --
void requireEnter();
void addPerson();
void showPeople();
void savePeopleToFile();
void loadPeopleFromFile();
void searchDatabase();
void removePerson();

int main(){

	char test;
	loadPeopleFromFile();

do{
	cout << "Number of People in Database: " << peopleInDatabase << endl;
	cout << "MENU " << endl;
	cout << "1. Add Person" << endl;
	cout << "2. Show All People" << endl;
	cout << "3. Save to File" << endl;
	cout << "4. Load people from file" << endl;
	cout << "5. Search fro a person" << endl;
	cout << "6. remove person" << endl;
	cout << endl;

	test = getch();

	switch(test) {
		case '1':
			addPerson();
			break;
		case '2':
			showPeople();
			break;
		case '3':
			savePeopleToFile();
			break;
		case '4':
			loadPeopleFromFile();
			break;
		case '5':
			searchDatabase();
			break;
		case '6':
			removePerson();
			break;
	}

	requireEnter();
	system("cls");
} while(test != 27);			// - 27 ascii = esc


	return 0;
}

//////////////////////////////
// -- FUNCTIONS --
void requireEnter() {
	cout << "click enter to continue" << endl;
	while(getch() != 13);	// - 13 ascii = enter
}

void addPerson(){
	cout << "Type name: ";
	cin >> people[peopleInDatabase].name;

	cout << "Type surname: ";
	cin >> people[peopleInDatabase].surname;

	cout << "Type age: ";
	cin >> people[peopleInDatabase].age;

	cout << "Type telephone: ";
	cin >> people[peopleInDatabase].telephone;

	peopleInDatabase++;
}

void showPeople(){
	if(peopleInDatabase > 0){
		for ( int i = 0; i< peopleInDatabase; i++ ){
			cout << "Person index: " << (i+1) << endl;
			cout << "Name: " << people[i].name << endl;
			cout << "Surname: " << people[i].surname << endl;
			cout << "Age: " << people[i].age << endl;
			cout << "telephone: " << people[i].telephone << endl;


			cout << " press (esc) key to exit program." << endl;

		}
	}else{
		cout<< "Database is empty."<< endl;
	}
}

void savePeopleToFile(){
	ofstream file("database.txt");

	if (file.is_open()){
		file << peopleInDatabase << endl;
		
		for ( int i = 0; i< peopleInDatabase; i++ ){
			file << people[i].name << endl;
			file << people[i].surname << endl;
			file << people[i].age << endl;
			file << people[i].telephone << endl;
		}

		file.close();

	}else{
		cout << "Couldn't save to Database.";

	}
}

void loadPeopleFromFile(){
	ifstream file("database.txt");

	if ( file.is_open()){
		file >> peopleInDatabase;
		
		if (peopleInDatabase > 0){
			
		// 	for ( int i = 0; i< peopleInDatabase; i++ ){
		// 	file >> people[i].name;
		// 	file >> people[i].surname;
		// 	file >> people[i].age;
		// 	file >> people[i].telephone;
		// }
		// cout << "People were properly loaded." << endl;

		// or

			int i=0;
			do{
				file >> people[i].name;
				file >> people[i].surname;
				file >> people[i].age;
				file >> people[i].telephone;
				i++;
			} while(!file.eof());
			cout << "People were properly loaded." << endl;


		} else {
			cout << "Database is Empty" << endl;
		}

	} else {
		cout << "The file database.text doesn't exist." << endl;
	}
}

void searchDatabase(){
	if (peopleInDatabase > 0){
		string name;
		cout << "Type a name of person you want to look for: ";
		cin >> name;

		for (int i = 0; i < peopleInDatabase; i++){
			if(name == people[i].name){
				cout << "Person index: " << (i+1) << endl;
				cout << "Name: " << people[i].name << endl;
				cout << "Surname: " << people[i].surname << endl;
				cout << "Age: " << people[i].age << endl;
				cout << "telephone: " << people[i].telephone << endl;

			}

		}

	} else {
		cout << "There is nobody in the database with that name? " << endl;
	}
}

void removePerson(){

	if(peopleInDatabase > 0){
		short index;
		cout << "Who do you want to remove? Type index: " << endl;
		cin >> index;

		if (peopleInDatabase >= index){

			for(short k = index; k < peopleInDatabase; k++){
				people[k-1].name = people[k].name;
				people[k-1].surname = people[k].surname;
				people[k-1].age = people[k].age;
				people[k-1].telephone = people[k].telephone;
			}
			peopleInDatabase--;

		} else {
			cout << " There is no person to remove." << endl;
		}

	} else {
		cout << " There nothing to remove." << endl;
	}
}