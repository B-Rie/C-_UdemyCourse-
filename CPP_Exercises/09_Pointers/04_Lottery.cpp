/*
Exercise 1.

Modify the program from "EXERCISE for Functions and pointes". Delete the "fillArrayWithValues"
function and edit "createArray" function so the initialization of the array to sort is done
within it. The values should no longer be inputted by the user but randomed from 0 to 1500.
This way you can check if your sorting works fine with much more numbers inputted. For example
try 150 numbers.

eg.

Output/User inputted: 
Input the size of the array to sort: 150

Output:
Array[0] = 41
Array[1] = 467
Array[2] = 334
Array[3] = 1000
Array[4] = 1169
Array[5] = 724
Array[6] = 978
Array[7] = 858
Array[8] = 1462
Array[9] = 464
Array[10] = 1205
Array[11] = 1145
Array[12] = 781
Array[13] = 327
Array[14] = 961
Array[15] = 491
Array[16] = 1495
Array[17] = 1442
Array[18] = 327
Array[19] = 936
Array[20] = 891
Array[21] = 1104
Array[22] = 902
Array[23] = 153
Array[24] = 292
Array[25] = 382
Array[26] = 921
Array[27] = 716
Array[28] = 218
Array[29] = 395
Array[30] = 947
Array[31] = 726
Array[32] = 1271
Array[33] = 1038
Array[34] = 369
Array[35] = 412
Array[36] = 167
Array[37] = 799
Array[38] = 535
Array[39] = 894
Array[40] = 203
Array[41] = 1311
Array[42] = 1322
Array[43] = 333
Array[44] = 1173
Array[45] = 164
Array[46] = 141
Array[47] = 211
Array[48] = 1253
Array[49] = 868
Array[50] = 47
Array[51] = 644
Array[52] = 1162
Array[53] = 1257
Array[54] = 537
Array[55] = 859
Array[56] = 1223
Array[57] = 741
Array[58] = 529
Array[59] = 778
Array[60] = 316
Array[61] = 35
Array[62] = 1190
Array[63] = 342
Array[64] = 288
Array[65] = 106
Array[66] = 40
Array[67] = 1442
Array[68] = 1264
Array[69] = 148
Array[70] = 446
Array[71] = 1305
Array[72] = 890
Array[73] = 729
Array[74] = 370
Array[75] = 350
Array[76] = 6
Array[77] = 1101
Array[78] = 393
Array[79] = 548
Array[80] = 129
Array[81] = 623
Array[82] = 84
Array[83] = 454
Array[84] = 756
Array[85] = 1340
Array[86] = 466
Array[87] = 1376
Array[88] = 431
Array[89] = 808
Array[90] = 444
Array[91] = 939
Array[92] = 626
Array[93] = 823
Array[94] = 1037
Array[95] = 538
Array[96] = 1118
Array[97] = 582
Array[98] = 429
Array[99] = 41
Array[100] = 333
Array[101] = 1115
Array[102] = 139
Array[103] = 1158
Array[104] = 204
Array[105] = 930
Array[106] = 477
Array[107] = 806
Array[108] = 173
Array[109] = 1386
Array[110] = 521
Array[111] = 245
Array[112] = 1424
Array[113] = 1072
Array[114] = 270
Array[115] = 1329
Array[116] = 1277
Array[117] = 573
Array[118] = 597
Array[119] = 12
Array[120] = 1486
Array[121] = 1290
Array[122] = 161
Array[123] = 636
Array[124] = 1355
Array[125] = 767
Array[126] = 1155
Array[127] = 574
Array[128] = 1031
Array[129] = 52
Array[130] = 350
Array[131] = 1150
Array[132] = 441
Array[133] = 724
Array[134] = 466
Array[135] = 430
Array[136] = 1107
Array[137] = 191
Array[138] = 7
Array[139] = 837
Array[140] = 457
Array[141] = 287
Array[142] = 753
Array[143] = 1383
Array[144] = 1445
Array[145] = 1409
Array[146] = 709
Array[147] = 758
Array[148] = 221
Array[149] = 588

Output/User inputted: 
Sort Ascending - 1, Descending - 2: 2
Bubble Sort - B or b, Selection Sort - S or s: B

Output:
Array[0] = 1495
Array[1] = 1486
Array[2] = 1462
Array[3] = 1445
Array[4] = 1442
Array[5] = 1442
Array[6] = 1424
Array[7] = 1409
Array[8] = 1386
Array[9] = 1383
Array[10] = 1376
Array[11] = 1355
Array[12] = 1340
Array[13] = 1329
Array[14] = 1322
Array[15] = 1311
Array[16] = 1305
Array[17] = 1290
Array[18] = 1277
Array[19] = 1271
Array[20] = 1264
Array[21] = 1257
Array[22] = 1253
Array[23] = 1223
Array[24] = 1205
Array[25] = 1190
Array[26] = 1173
Array[27] = 1169
Array[28] = 1162
Array[29] = 1158
Array[30] = 1155
Array[31] = 1150
Array[32] = 1145
Array[33] = 1118
Array[34] = 1115
Array[35] = 1107
Array[36] = 1104
Array[37] = 1101
Array[38] = 1072
Array[39] = 1038
Array[40] = 1037
Array[41] = 1031
Array[42] = 1000
Array[43] = 978
Array[44] = 961
Array[45] = 947
Array[46] = 939
Array[47] = 936
Array[48] = 930
Array[49] = 921
Array[50] = 902
Array[51] = 894
Array[52] = 891
Array[53] = 890
Array[54] = 868
Array[55] = 859
Array[56] = 858
Array[57] = 837
Array[58] = 823
Array[59] = 808
Array[60] = 806
Array[61] = 799
Array[62] = 781
Array[63] = 778
Array[64] = 767
Array[65] = 758
Array[66] = 756
Array[67] = 753
Array[68] = 741
Array[69] = 729
Array[70] = 726
Array[71] = 724
Array[72] = 724
Array[73] = 716
Array[74] = 709
Array[75] = 644
Array[76] = 636
Array[77] = 626
Array[78] = 623
Array[79] = 597
Array[80] = 588
Array[81] = 582
Array[82] = 574
Array[83] = 573
Array[84] = 548
Array[85] = 538
Array[86] = 537
Array[87] = 535
Array[88] = 529
Array[89] = 521
Array[90] = 491
Array[91] = 477
Array[92] = 467
Array[93] = 466
Array[94] = 466
Array[95] = 464
Array[96] = 457
Array[97] = 454
Array[98] = 446
Array[99] = 444
Array[100] = 441
Array[101] = 431
Array[102] = 430
Array[103] = 429
Array[104] = 412
Array[105] = 395
Array[106] = 393
Array[107] = 382
Array[108] = 370
Array[109] = 369
Array[110] = 350
Array[111] = 350
Array[112] = 342
Array[113] = 334
Array[114] = 333
Array[115] = 333
Array[116] = 327
Array[117] = 327
Array[118] = 316
Array[119] = 292
Array[120] = 288
Array[121] = 287
Array[122] = 270
Array[123] = 245
Array[124] = 221
Array[125] = 218
Array[126] = 211
Array[127] = 204
Array[128] = 203
Array[129] = 191
Array[130] = 173
Array[131] = 167
Array[132] = 164
Array[133] = 161
Array[134] = 153
Array[135] = 148
Array[136] = 141
Array[137] = 139
Array[138] = 129
Array[139] = 106
Array[140] = 84
Array[141] = 52
Array[142] = 47
Array[143] = 41
Array[144] = 41
Array[145] = 40
Array[146] = 35
Array[147] = 12
Array[148] = 7
Array[149] = 6

*/

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int *createArray(int);
int numericInput();
void swapTwoValues(int *, int *);
void printArrayValues(int[], int);
void bubbleSort(int[], int, int=1);
void selectionSort( int[], int, int=1);

int main(){
	cout << "Input the size of the array to sort: ";
	int size = numericInput();
	int *a = createArray(size);
	printArrayValues(a, size);

	cout << endl << "Sort: Ascending - 1 or Descending - 2: ";
	int order = numericInput();
	if(order != 2){		// - setting order to default
		order = 1;
	}

	char sortChoice;
	cout << endl <<" Bubble Sort - B or b, Selection Sort - S or s: ";
	cin >> sortChoice;
	if (sortChoice != 'S' || sortChoice != 's'){	// - setting sortChoice to default
		sortChoice = 'B';
	}
	if (sortChoice == 'B' || sortChoice == 'b'){
		bubbleSort(a, size, order);
	} else if (sortChoice == 'S' || sortChoice == 's'){
		selectionSort(a, size, order);
	}
	
	delete []a;
	return 0;
}

//////////////////////////////////
// --- Functions ---
/*	- this functions creates a dynamically allocated array with the size of the array sent
	  as an arguement of the function. This function will be assigned to a dynmically allocated
	  variable in main.																		*/
int *createArray(int){
	int *newArr = new int[150];
	srand(time(NULL));
	for (int i=0; i<150; i++){
		int numb = rand()%1500+1;
		newArr[i] = numb;
	}
	
	return newArr;
}

int numericInput(){
	int x;
	cout << "> ";
	cin >> x;

	while (!cin.good()){
		// cleared stream
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get Input
		cout << "Enter a numeric values ONLY!";
		cin >> x;
	}
	// cleared stream
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return x;
}
/*	- this function points to two values and switches them using pointers */
void swapTwoValues(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void printArrayValues(int arr[], int len){
	for (int i=0; i<len; i++){
		cout << "Array["<<i<<"] = " << arr[i] << endl;
	}
}

void bubbleSort(int arr[], int len, int sort){
	int size = len;
	while (size != 0){
		for (int i=0; i<len-1; i++)
			if (sort==1 && arr[i] > arr[i+1]){
				swapTwoValues(arr+i, arr+i+1);
			} else if (sort==2 && arr[i] < arr[i+1])
				swapTwoValues(arr+i, arr+i+1);
		size--;
	}
	printArrayValues(arr, len);
}

void selectionSort( int arr[], int len, int sort){
	
	for (int i=0; i<len; i++){
		int min = i;
		for (int j=i+1; j<len; j++){
			if (sort==1 && arr[j] < arr[min]){
				min = j;
			} else if (sort==2 && arr[i] > arr[min]){
				min = j;
			}
		}
		swapTwoValues(arr+i , arr+min);
	}
	printArrayValues(arr, len);	
}