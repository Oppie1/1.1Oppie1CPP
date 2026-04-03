#include <iostream>
using namespace std;


//In this tutorial we will use pointers to point to the memory address of a variables array elements.

int main() {

	//Here we initialize we initialize a claudia array that has 5 elements
	//Declare an int claudia array and initialize it to 5.
	//CODE:
	int claudia [5];
	

	cout << "In this tutorial we will display some of the claudia array memory addresses to the screen using the pointer bp#\n";
	cout << "variable we assign to them, An example of this is -> int* bp1 = &claudia[1]. So we use a pointer '*' in conjunction\n";
	cout << "with an '&'(address of) operator to do this. Basically we are setting one variable (bpo) to the memory address\n";
	cout << "of another variable (claudia).\n\n";
	//Now we create pointer variables using the "*" operator to store memory addresses. We initialize them to point to elements
	//0-2 (3 total elements) of the claudia array. We use the "&" address-of operator to get each element's memory address, which
	//is what pointers store

	//Declare an int pointer variable named bpo and initialize it to the memory address the first element of the claudia array.
	//CODE:
	int* bpo = &claudia[0];

	//Declare another int pointer named bpo1 and initialize it to the memory address of the second element of the claudia array
	//CODE:
	int* bpo1 = &claudia[1];

	//Declare a pointer int pointer named bpo2 and initialize it to the memory address of the third element of the claudia array.
	//CODE:
	int* bpo2 = &claudia[2];

	//So now that  we have set out pointer variables to some of the memory address locations in the claudia array we can use
	//them to print out these memory addresses to the screen.
	cout << "\nBelow are the memory addresses of claudia/bp#\n";

	//Now display/cout statement the memory addresses ove bpo, bpo and bpo2 to the screen.
	//CODE:
	cout << "bpo is at: " << bpo << endl;

	//CODE:
	cout << "bpo1 is at: " << bpo1 << endl;

	//CODE:
	cout << "bpo2 is at: " << bpo2 << endl; 

	//Below is an important detail about the increment operator (++) in this context. When we use it like this we increment 
	//the memory address by 1. And so now bp0 will have bp1s memory address. As you can see in the cout statement they are the
	//same after the bpo++ increment step.
	cout << "\nNow we demonstrate what happens when we use the increment operator (++) on a bp# variable. It increments the the\n";
	cout << "current bp# address to the next and is set to that bp# memory address. They will be the same.\n";

	//Create/assign bpo to the increment operator ++.
	//CODE:
	bpo++;

	//Add a cout statement that shows that shows bpo to the screen
	//CODE:
	cout << "bpo now equals: " << bpo << endl;
}