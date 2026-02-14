#include<iostream>
using namespace std;


//Tutorial: Demonstrates how to access and use pointers to memory addresses
//- The & operator gets the memory address of a variable
//- The * operator declares a pointer variable that stores an address

int main() {
	
	//Create an int variable. The specific value (5) doesn't matter for this demo
	int fish = 5;

	//Print the memory address of 'fish' using the & (address-of) operator
	cout << "Memory address of fish (using &): \n" << &fish << endl;
	cout << "\n";

	//Create a pointer variable and store the address of 'fish' in it
	int* fishPointer;
	fishPointer = &fish;

	//Print the same memory address through the pointer variable
	cout << "Memory address of fish (using pointer):\n" << fishPointer << endl;
	//Both outputs should display the same memory address
	cout << "\nBoth outputs should be identical. " << endl;
	
}