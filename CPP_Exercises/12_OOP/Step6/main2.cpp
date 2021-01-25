#include <iostream>

using namespace std;


class Motorcycle{
private:
	
public:

	string m_make;
	string m_model;
	int m_year;
	//Motorcycle(string, string, int);
};

class Dealer{
private:
	Motorcycle m_motorcycles[3];
public:
	void addMotorcycle(Motorcycle);
	Motorcycle getMotorcycle(int);
};





int main(){

	Motorcycle bike1; //("Ductai", "Scrambler", 2020);
	bike1.m_model = "Scrambler";
	bike1.m_make = "Ducati";
	bike1.m_year= 2020;

	Dealer dealer1;

	dealer1.addMotorcycle(bike1);

	cout << "Dealer bike make: " << dealer1.getMotorcycle(0).m_make << endl;

	return 0;
}





// Motorcycle::Motorcycle(string make, string model, int year){
// 	this->m_make = make;
// 	this->m_model = model;
// 	this->m_year = year;
// }

void Dealer::addMotorcycle(Motorcycle bike){
	this->m_motorcycles[0] = bike;
}
Motorcycle Dealer::getMotorcycle(int position){
	return m_motorcycles[position];
}