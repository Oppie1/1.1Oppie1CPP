#include<iostream>
#include "claudia.h"
using namespace std;


//Default constructor - left empty because we don't need to initialize anything
//The "::" is the scope resolution operator: Claudia::Claudia() means "the Claudia() function that belongs to the Claudia class."

//Define the default constructor with no parameters.
//CODE:
Claudia::Claudia() {


}

//ClassName::FunctionName().
//This links the definition here to the prototype declared in the header file.
//Define the void printedFromCPP member function with no parameters that displays in cout statement that it is printing from the .cpp file
//CODE:
void Claudia::printedFromCpp(){

//cout message to screen
//CODE:
	cout << "I am being printed from the .cpp file from the function prototype in .h" << endl;

	//Prints a message to the console, then returns control back to the caller.
}
