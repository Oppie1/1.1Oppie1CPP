#include <iostream>
using namespace std;


//Demonstration of variable initialization and basic arithmetic operations

int main() {

	//Initialization - variable is created AND given its first value
	//Must use "int" data type to set variable (here a) to an integer. Same for
	//int b setting it equal to 3. This is called initialization.

	int a = 3;
	int b = 4;
	int sum;
	int difference;

	//Demonstration on of assignment "operator"
	//The data type "int" must match the variables (sum -> (+)) data type. 
	//Here we must do "sum" and "difference" since we are doing a different operation (-) to assign.

	//Here do sum operation 
	sum = a + b;
	//Here do a difference operation
	difference = a - b;
	
	
	//Here we see the information (a, b and sum) to the screen.

	cout << "a = " << a << ", b = " << b << ", So sum = " << sum << "\n"<< endl;

	//Here we see (a, b and sum)
	cout << "a = " << a << ", b = " << b << ", So difference = " << difference << "\n" << endl;


	//Now manipulate the code above to change the values of a and b. THEN position the sum and difference expressions
	//in a way that reflect that change in the program
	cout << "Now change via assignment a and b to different values and see what happens " << endl;

	a = 6;
	b = 3;

	
	sum = a + b;
	difference = a - b;

	cout << "a = " << a << ", b = " << b << ", So sum = " << sum << "\n" << endl;

	//Here we see (a, b and sum)
	cout << "a = " << a << ", b = " << b << ", So difference = " << difference << "\n" << endl;

	return 0;

}

//Additional Points:
//int a; -> Declaration only (a exists but has a garbage value)
//a = 4; -> Assignment - giving a value to an EXISTING variable (here int a)
//Also, int b = 3; -> initialization.
//b = 10; -> Assignment - changing b's value
//