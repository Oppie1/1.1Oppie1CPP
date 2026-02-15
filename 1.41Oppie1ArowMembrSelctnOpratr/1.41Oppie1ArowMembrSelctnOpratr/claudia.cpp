#include<iostream>
#include "claudia.h"
using namespace std;


//Default constructor - left empty because we don't need to initialize anything
//The "::" is the scope resolution operator: Claudia::Claudia() means "the Claudia() function that belowngs to the Claudia class."
Claudia::Claudia()
{

};

//Claudia::printedFromCpp() - same pattern: ClassName::FunctionName().
//This links the definition here to the prototype declared in the header file.
void Claudia::printedFromCpp() {
	//Prints a message to the console, then returns control back to the caller.
	cout << "I am a function being printed from the .cpp file" << endl;
}