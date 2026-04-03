#include<iostream>
#include "claudia.h"
using namespace std;



//main() is the entry point of the program
//It creates Claudia objects and demonstrates two ways to call member functions


int main() {

	//Declare an object of the Claudia class.
	//CODE:
	Claudia claudiaObject;

	//Create a pointer to that object.
	//Claudia* (class) declares a pointer type -> object pointer; "&claudiaObject" gives us the object's memory address
	
	//Declare an object pointer named claudiaPointer that points to the memory address of claudia object
	//CODE:
	Claudia* claudiaPointer = &claudiaObject;

	//Call the printFromCpp member function using the dot (.) operator on the Claudia object directly.
	//CODE:
	claudiaObject.printedFromCpp();
	
	//The arrow operator dereferences the pointer object and accesses the member in one step
	//Call the SAME function using the arrow (->) operator on the pointer.
	//CODE:
	claudiaPointer -> printedFromCpp();

	//---Extra Credit: Pointers & Dereferencing---

	//Declare an integer variable x and initialize it to 42
	//CODE:
	int x = 42;

	//"p" is a pointer that stores the memory address of x.
	//Declare an integer pointer p and set it equal to the memory address of x
	//CODE:
	int* p = &x;

	//Printing the pointer itself outputs the memory address.
	//Make a cout statement the displays p to then screen. "p equals: "
	//CODE:
	cout <<"The memory address of p equals: " << p << endl;

	//Make a statement to be printed to the screen that prints the pointer p.
	//CODE
	cout << "The value stored at that memory address equals: " << *p << endl;
}