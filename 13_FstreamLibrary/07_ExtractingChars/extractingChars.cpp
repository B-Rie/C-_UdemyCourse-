#include <iostream>
#include <fstream>		

using namespace std;
/* Extracting characters from files: 
	getline(destination, ##,'\n'); 
			- (where to store the extracted information, how many characters to extracted unless, seperator(delimeter))	- 
	get 	- same as getline but DOESN"T EXTRACT SEPERATOR
	ignore	- (how_many_characters_to_extracts AND TO IGNORE THEM, seperator) - extracts characters
*/

int main(){
 
	fstream file;

	file.open("07_sample.txt", ios::in | ios::binary);	

	if (file.is_open()) {
		char first, second;
		char buffer[50];
		
		// // -- GETLINE() --
		// file.getline(buffer, 50, '\n'); 		// - by default, getline has \n. so if we reach \n without getting 50 chars, it will exit eith what it got.
		// // -- GET() --
		// while (file.getline(buffer, 50, '\n')){	// - this will print the  entire txt file
		// 	cout << buffer << endl;
		// }
		// while (file.get(buffer, 50, '\n')){	// - this will print the  entire txt file
		// 	cout << buffer << endl;
		// }
		// // -- GET() and INGORE() -- first and second inital
		// do {
		// 	first = file.get();
		// 	file.ignore(40, ' ');
		// 	second = file.get();
		// 	file.ignore(40, '\n');
		// 	cout << first << second << endl;

		// } while(!file.eof());
		// // -- GET() and INGORE() -- first name and second inital
		do {
			file.getline(buffer, 50, ' ');
			second = file.get();
			file.ignore(40, '\n');
			cout << buffer << " " << second << ". " << endl;

		} while(!file.eof());
		
	} else
		cout << "The file couldn't be opened properly" << endl;
		//file.close();		
	return 0;
}