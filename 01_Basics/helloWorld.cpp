/*File Info: This is a Basic file, this was created to test and understand the differnet types 
			 of vaiables in c++ and to understand the sYntax*/


// IOStream: Input-Output Stream
#include <iostream> 

using namespace std;

// -- Understanding Variables --
int A  = 6; 		 // 4 Bytes
short int t1 = 5;	 // short: -32760 to 32767, 2 ByTES
float t2 = 5.12; 	 // 4 Bytes assign numbers that are up to 38 zeros
double t3 = 7.12;	 // 8 bytes assign numbers that are up to 308 zeros, greater precision
unsigned short int t9 = 3700;

char t4 = 'j'; 		  // character
string t5 = "Hey";	  // stirng
string t6 = "Arnold"; // 
string combinedStrings = t5 + " " + t6;

bool t7 = true; 	 // true = 1
bool t8 = false; 	 // false = 0

const string NAMEOFGAME = "Conqueror of C++"; // const variables can not be changed

main(){
	cout << "Hello World!" << endl;
	cout << A << " is at address: " << &A << endl; // shows the address the variable is located
	cout << t1 << ": " << endl;	
	cout << t2 << ": " << endl;	
	cout << t4 << ": " << endl;
	cout << t5 << ": " << endl;
	cout << combinedStrings << endl;
	cout << t7 << endl;
	cout << t9 << endl;
	cout << NAMEOFGAME << endl;
}