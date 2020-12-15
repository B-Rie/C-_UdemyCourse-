#include <iostream>

using namespace std;

int main() {
	
	/* */
	string text = "hello";

	char ch = text[0];

	char characters[] = "123456789abcdef"; // - technicaly a char pointer

	cout << characters[0] << endl;		// op: 1
	cout << *(characters) << endl;		// op: 1

	cout << characters[1] << endl;		// op: 2
	cout << *(characters+1) << endl;	// op: 2

	char *p = characters;	// - points to the begins of characters

	cout << p[0] << endl;	// op: 1	
	cout << *(p) << endl;	// op: 1

	cout << p[1] << endl;	// op: 2
	cout << *(p+1) << endl;	// op: 2
	cout << endl;

	cout << " -- Char -> String and String -> Char -- " << endl;
	const char *text2 = text.c_str();	// - STRING -> CHAR

	cout << text2 << endl;

	char array[] = "here is a text";

	string test = array;				// - CHAR -> STRING
	cout << test << endl;

	cout << endl;
	cout << " -- THIS IS A test -- " << endl;

	char* const dynamic_array = new char [60];		// 
	dynamic_array[0] = 'k';
	//dynamic_array[1] = '\O';
	dynamic_array = "hello";

	cout << dynamic_array << endl;

	delete [] dynamic_array;

	string array_of_string[5] = "this i a text that will be in all of the element of strings";
	array_of_string[0] = "afadf";
	cout << array_of_string[0] << endl;
	cout << array_of_string[1] << endl;
	cout << array_of_string[2] << endl;
	
	return 0;
}