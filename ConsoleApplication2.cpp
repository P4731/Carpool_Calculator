#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
int main() {
	//declare variables
	int my_id = 22, num_let = 5;
	//name constant
	const int LEFT_MOST_DIGIT = 5;
	//my_id is the sum of college id
	// num_let is the number of letters in user's last name
	//Input users last name
	std::cout << "My last name is: Patel\n";
	//Input users college id numbers
	std::cout << "My student id login is: 0545224\n";
	//print out the variable my_id
	std::cout << "my id is: " <<my_id;
	//print out the variable num_let
	std::cout << "\nnum_let is: " <<num_let;
	// calculate and print Expression #1 my_id/2
	std::cout << "\n\nExpression #1: " << my_id << " / 2 = " <<my_id/2;
	//calculate and print expression #2 my_id % 2
	std::cout << "\nExpression #2: " << my_id << " % 2 = " << my_id % 2;
	//calculate and print expression #3 2 + 3 + 4 ... + num_let
	std::cout << "\nexpression #3:";
	int sum = 0;
	for (int i = 2; i <= num_let; i++) {
		std::cout << i << " + ";
		sum += i;
	}
		std::cout << "= " << sum;
		//calculate and print expression #4: my_id + num_let
		std::cout << "\nExpression #4: " << my_id << " + " << num_let << " = " << my_id + num_let;
		//calculate and print expression #5: my_id * num_let
		std::cout << "\nExpression #5: " << my_id << " * " << num_let << " = " << my_id * num_let;
		//calculate and print expression #6 my_id += num_let
		std::cout << "\nExpression #6: " << my_id << " += " << num_let << " = " << my_id + num_let;  
		//calculate and print expression #7: my_id *= 

		return 0;
}