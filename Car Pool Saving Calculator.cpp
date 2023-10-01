/*
 * CS 102-05 - Lab assignment 2
 * Instructor: Professor Lamble
 * Topics: Car Pool Savings Calculator
 * Date: 10/01/2023
 */

#include <iostream> //need for cout
#include<iomanip> // need for setprecision
#include <cmath> // need for order of operations
using namespace std;

int main() 
{
	//Make Cost per gallon a variable
	float CPG;
	
	//Create statement for cost per gallon of gas
	cout << "Enter cost per gallon of gas (in dollars.cents): ";
	cin >> CPG;
	
		//Validate user input for cost per gallon
		if (CPG <= 0) 
		{
		cout << "Invalid input. Cost per gallon must be greater than zero." << endl;
		return 1;
		}
	//Make average miles per gallon a variable
	float AMPG;
	//Enter Average miles per gallon
	cout << "Enter average miles per gallon: ";
	cin >> AMPG;
	
	//Make miles driven per day a variable
	float MDPD;
	//Create statement for miles driven
	cout << "Enter miles driven per day: ";
	cin >> MDPD;
	
	//Make Parking fees per day a variable
	float PFPD;
	//Create statement for Parking fees
	cout << "Enter parking fees per day (in dollars): ";
	cin >> PFPD;
	
	//Make tolls per day a variable
	float TPD;
	cout << "Enter tolls per day (In dollars): ";
	cin >> TPD;
	
	//calculate total driving cost
	float total = (MDPD / AMPG) * CPG + PFPD + TPD;
	//Once calculated round total to 2 decimal places
	cout << fixed << setprecision(2);
	//Statement shall let user know their daily driving cost
	cout << "Your daily driving cost is: "<<total << endl;
	
	//Calculate carpool cost options
	cout << "\nCarpool Options: " << endl;
	//Calculate carpool cost for 1 person
	cout << "1 person:          " << total << endl;
	//Calculate carpool cost for 2 people
	cout << "2 people:          " << total / 2 << endl;
	//calculate carpool cost for 3 people
	cout << "3 people:          " << total / 3 << endl;
	//calculate carpool cost for 4 people
	cout << "4 people:          " << total / 4 << endl;

	return 0;
}