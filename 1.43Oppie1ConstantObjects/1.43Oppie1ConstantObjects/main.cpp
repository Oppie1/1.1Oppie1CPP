#include <iostream>
#include "Claudia.h"
using namespace std;

//Tutorial: Constant (const) Objects
//constant objects are just like regular object except the syntax is just a bit different. The reason progrmers may use const
//objects is they want the functions and the objects to not be used elsewhere in the program. When a const object is declared
//it must use the const keyword in both the .h and .cpp files.

int main() {

	cout << "---Below is we are calling a regular object---" << endl;
	Claudia cvo;//No () is necessary here. cv is an object NOT a function. Again, like an empty box we can put things in.
	cvo.normalObject();//Here we use the . separator which acts like an add sign ->cv "add" this tool to my box. In computer language
	//we are adding a function (normalObject) to the box. The function is in the cpp file and when it executes/runs it just prints
	//a statement out to the screen.
	cout << "\n---Below we now call a constant (const) object---" << endl;

	//Here we create a const object (cvco) of the Claudia class.
	const Claudia cvco;
	//All functions that are used by this object must be constant functions. So in Claudia.cpp file the program uses the funciton
	//that matches this syntax
	cvco.constantObject();

}