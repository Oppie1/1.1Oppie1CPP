#include <iostream>
#include "Claudia.h"
using namespace std;

//In this tutorial we cover operator overloading which is just a way to seed an object with a 
//symbol, letter, number etc. that can be used through a program

int main() {

	//Here we have two objects with arguments 33
	Claudia a(33);
	Claudia b(33);
	//c is an object of the Claudia class with no parameters. The constructor set this object to 0

	Claudia c;

	cout << "The value of the two objects a and b added together via use of an operator overload\n";
	cout << "(here ^ -> +) is:" << endl;

	//Here we call on the ^ operator which will then be overriden int he .cpp file to set this
	//expression to add the two objects a and b.
	c = a ^ b;
	//We see the answer out to the screen.
	cout << c.num;
}