#include <iostream>
using namespace std;


//In function templates we make a template of of a class makes it so we can use different
//data types in the same function. This is helpful in that we don't have to make multiple
//functions for different data.

//Here we make a template of the Adam class. template key word template and <>

//Declare a template for the Adam class (or template header),
//CODE:


//Here we declare the data type of type "Adam" (class).
//The parameters of prototype acts as place holders for the arguments in main.
//Here, it can hold data from both int and double.

//Define a function template named addTogether with return type Adam, parameters Adam a and Adam b,
//that returns their sum (a + b)
//CODE:


	//This function returns the sum of those two values back to main.
	//CODE:
	




int main() {
	//Here we use a double in the function template

	//Declare double variables x and y, initializing them to 7.65 and 43.54 respectively, and
	//declare z uninitialized to store the result.
	//CODE:
	
	
	//Note: d is declared as int but assigned 3.14 - the decimal is truncated to 3. Both c
	//and d are ints, so the template uses the int version of addTogether.

	//Declare integer variables c and d, initialize them to 3 and 3.14 respectively and declare
	//e uninitialized to store the result.
	//CODE:
	
	
	//Then we add to integers together

	//Declare int variables f and g, initializing them to 6 and 7 respectively and declare the h
	//uninitialized to store the result.
	//CODE:
	

	//So each one of these variables in the arguments sub in for a and b in the function
	//prototype/definition.

	//Call the addTogether function template with double arguments x and y and assign the result to z.
	//CODE:
	

	//Call the addTogether function template with double arguments c and d and  assign the result to e.
	//CODE:
	

	//Call the addTogether function template with double arguments f and g and assign the result to h.
	//CODE:


	cout << "Here we add two doubles together using template\n\n";
	//Use cout statement to print z to screen.
	//CODE:
	

	cout << "-----------------------------------------\n";
	cout << "Adding two ints(note:3.14 was truncated to 3 at declaration(int), so the \n";
	cout << "the template resolves to the int version):\n";
	//Use cout statement to print e to screen.
	//CODE:


	cout << "--------------------------------------------------------\n";
	cout << "Here we add two whole numbers/int together and it uses the template in the same\n";
	cout << "way as when we add two doubles (decimals together):\n" << endl;
	//Use cout statement to print f to screen,
	//CODE:


}