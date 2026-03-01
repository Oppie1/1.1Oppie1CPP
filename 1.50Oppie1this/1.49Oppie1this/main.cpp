#include<iostream>
#include "Claudia.h"
using namespace std;

//In this tutorial we will cover the "this" keyword and what it is used for. In C++ the this keyword is a special pointer available
//inside non-static member functions of a class. It points to the current object that invoked the member function.

int main() {

	cout << "The following function of the Claudia object will demonstrate three different ways to output 23 to screen"
		<< "two of which will be using the 'this' keyword:\n";
	//Here we create a object of the Claudia class and we set the argument to 23.
	Claudia cv(23);
	//Now we use the object and the "." which acts basically as a + sign to execute the function 
	cv.printToScreen();
}