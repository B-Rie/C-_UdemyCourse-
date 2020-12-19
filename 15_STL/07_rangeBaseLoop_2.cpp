#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> wholeNumbers{20, 10, 4, -3, 25};

	//vector<int>::iterator it = wholeNumbers.begin();	

	/* range based loops - it loops as long as there are elements within Range (scope) of container.
	*/

	cout << " -- Traditional For-Loop -- " << endl;
	// - replace( vector<int>::iterator )--> auto
	for(auto it = wholeNumbers.begin(); it != wholeNumbers.end(); it++){
		cout << *it << endl;
	}


	cout << endl << " -- Range Base Loop -- " << endl;
	for(auto nr : wholeNumbers){
		cout << nr << endl;
	}

	
	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> wholeNumbers{20, 10, 4, -3, 25};

	/* range based loops - it loops as long as there are elements within Range (scope) of container.
	*/

	cout << " -- Traditional For-Loop -- " << endl;
	// - replace( vector<int>::iterator )--> auto
	for(auto it = wholeNumbers.begin(); it != wholeNumbers.end(); it++){
		cout << *it << endl;
	}

	// - To avoid coping and change the orignal values in the vector, we have to ref(&) it.
	// - use & for objects
	cout << endl << " -- Range Base Loop with &(ref) -- " << endl;
	for(auto& nr : wholeNumbers){	// - adding const auto wiil keep you from changing the value, but you cans till print out the contents
		nr *= 10;
		cout << nr << endl;
	}

	
	return 0;
}

