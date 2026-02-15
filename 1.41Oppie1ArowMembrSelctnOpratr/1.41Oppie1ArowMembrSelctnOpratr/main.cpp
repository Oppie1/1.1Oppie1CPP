#include<iostream>
#include "claudia.h"
using namespace std;



//main() is the entry point of the program
//It creates Claudia objects and demonstrates two ways to call member functions


int main() {

	//Create an object of the Claudia class.
	Claudia claudiaObject;

	//Create a pointer to that object.
	//Claudia* declares a pointer type; "&claudiaObject" gives us the object's memory address
	Claudia* claudiaPointer = &claudiaObject;

	//Call a member function using the dot (.) operator on the objects directlyu.
	claudiaObject.printedFromCpp();

	//Call the same function using the arrow (->) opertor on the pointer.
	//The arrow operator dereferences the pointer and accesses the member in one step
	claudiaPointer->printedFromCpp();

	//---Extra Credit: Pointers & Dereferencing---

	int x = 42;
	//"p" is a pointer that stores the memory address of x.
	int* p = &x;

	//Printing the pointer itself outputs the memory address.
	cout << p << "\n";
	cout << *p;
}