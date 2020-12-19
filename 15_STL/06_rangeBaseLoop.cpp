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

