#include <iostream>
#include "Claudia.h"
using namespace std;

//In this tutorial we cover operator overloading which is just a way to seed an object with a 
//symbol, letter, number etc. that can be used through a program

int main() {

	//Instantiate two objects of the Claudia class a and b with the parameters 3 and 7 respectively.
	//CODE:
	Claudia a(3);
	Claudia b(7);

	//c is an object of the Claudia class with no parameters. The constructor set this object to 0

	//Instantiate a third object c with no parameters.
	//CODE:
	Claudia c;
	cout << "The value of the two objects a and b added together via use of an operator overload\n";
	cout << "(here ^ -> +) is:" << endl;

	//Here we call on the ^ operator which will then be overridden int he .cpp file to set this
	//expression to add the two objects a and b.

	//Assign the result of the expression to the object c.
	//Use/write an expression using the overloaded ^ operator to add the two objects a and b.
	//CODE:
	c = a ^ b;

	//We see the answer out to the screen.
	//Display/out put the value of c.num to the screen (object "." number from a and b addition)
	//CODE:
	cout << c.num;
}