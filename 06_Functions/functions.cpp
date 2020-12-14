#include <iostream>

using namespace std;
void pre_functions();
bool isNumber(string); // - these declarations do not need to know the varaible names, just the types

main() {
	// pre_functions();
	
	cout << "-- functions --" << endl;
	string tmp;									
	cout << "Enter the number: " << endl;
	cin >> tmp;
	
	if(isNumber(tmp)) { // - if function is true
		cout << " Number entered properly. " << endl;
	} else {
		cout << " Number wasn't entered properly." << endl;
	}
	
}

////////////////////////////////////////
//           FUNCTIONS

void pre_functions(){
	cout <<"-- pre-functions --" << endl;
	int nr, result = 0; // - variables have to be given a value, otherwise they will be a random number
	for (int i = 0; i < 3; i++) {
		cout << "Enter " << (i+1) << " number" << endl;
		cin >> nr;
		result += nr;
	}
	cout << result << endl;
	//cout << "we added " << i << " number" << endl; // - this will cause an error because "int i" is a local variable to the for loop
}

bool isNumber(string tmp) {
	for (int i = 0; i < tmp.length(); i++){
		cout << tmp[i];
		//if (!(tmp[i] >= 48 && tmp[i] <= 57)){  // - comparing i to ascii characters to confirm they're numbers
		if (!(isdigit(tmp[i]))){	
			return false;
		}
	}
	return true;
}