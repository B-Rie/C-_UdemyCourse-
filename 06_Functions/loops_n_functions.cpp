#include <iostream>
#define PI 3.14

using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaTriangle(double, double);
double areaSquare(double);
double areaRectangle(double,double);
bool isValid(string);

int main() {
	int choice;
	char cont;
	do {
		system("cls");
		initMenu();

		cin >> choice;
		menuDecision(choice);

		do{
			cout << "Dou you want to continue? (Y/N)" << endl;
			cin >> cont;
		} while(tolower(cont) != 'y' && tolower(cont) != 'n');
		
		cout << "Do you want to continue the program? (Y/N)" << endl;
		cin >> cont;

	} while(tolower(cont) != 'n');

	return 0;
}

/////////////////////////////////////////
// 			FUNCTIONS
void initMenu(){
	cout << "Enter option: " << endl;
	cout << "1. Circle: " << endl;
	cout << "2. Square: " << endl;
	cout << "3. Rectangle: " << endl;
	cout << "4. Triangle: " << endl;
}

void menuDecision(int choice){
	double r, a, b, h;
	switch(choice){
		case 1:
			
			do {cout << "Enter the radius: " << endl; (cin >> r;) }while(!isValid());
			areaCircle(r);
			break;
		case 2:
			
			do {cout << "Enter the sides of a square: " << endl; (cin >> a;)}  while(!isValid("The data is wrong, please type it again."));
			areaSquare(a);
			break;
		case 3:
			
			do {cout << "Enter the width and height of a retangle: " << endl; (cin >> a >> b;)}  while(!isValid("The data is wrong, please type it again."));
			areaRectangle(a, b);
			break;
		case 4:
			
			do {cout << "Enter the base and height of a triangle: " << endl; (cin >> a >> h;)} while(!isValid("The radius is wrong, please type it again."));
			areaTriangle(a, h);
			break;
		default:
			cout << "YOU didnt choose any of the options above." << endl;
	}
}

double areaCircle(double r){
	double result = PI * r * r;
	cout << "The area of a circle that radius is: " << r << " = " << result << endl;
	return result;
}

double areaSquare(double a){
	double result = a*a;
	cout << "The area of a square that sides is: " << a << " = " << result << endl;
	return result;
}

double areaRectangle(double a, double b){
	double result = a * b;
	cout << "The area of the rectangles first side is: " << a << "The area of the rectangles second side is: " << b << " = " << result << endl;
	return result;
}

double areaTriangle(double a, double h){
	double result = (1/2.0) * a * h;
	cout << "The area of a triangle is: " << result << endl;
	return result;
}

bool isValid(string error_msg){
	if(cin.rdstate()){ // - state is wrong when it is not equal to 0
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");
		initMenu();
		cout << error_msg << engl;
		return false;
	}

	return true;
}

bool isValid(){
	if(cin.rdstate()){ // - state is wrong when it is not equal to 0
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");
		initMenu();
		return false;
	}

	return true;

}