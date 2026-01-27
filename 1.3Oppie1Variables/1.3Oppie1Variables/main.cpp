#include <iostream>
using namespace std;


//Demonstration of variable initialization and basic arithmetic operations

int main() {
	
	//Initialization - variable is created AND given its first value
	int a = 4;//Must use "int" data type to set variable (here a) to an integer. Same for
	int b = 3;//int b setting it equal to 3. This is called initialization.

	//Demonstration on of assignent "operator"
	int sum = a + b;//The data type "int" must match the variables (sum) data type. 
	int sum2 = a - b;//Here we must do "sum2" since we are doing a different operation (-) to assign
	
	cout << "a + b = \n";
	cout << sum << endl;
	cout << "\na - b = " << endl;
	cout << sum2 << endl;//Here if we used "sum" we would just get a repeat a + b;

	return 0;

}

//Additional points:
//if int a; //Declaration only (a exists but has a garbage value)
//a = 4; -> Assignment - giving a value to an EXISTING variable
//Also,
//int b = 3; -> Initialization
//b = 10; -> Assignment - changing b's value