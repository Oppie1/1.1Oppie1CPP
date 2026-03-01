#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;

//In this tutorial we demonstrate that derived classes (such as Son here) have access
//To the base classes (Father here) members. It can use public and protected members
//within a Son object through inheritance. However, Son objects DO NOT have access to 
//the private members of the Father class.

int main() {

	cout << "This is the Son object access: " << "\n" << endl;
	//Here we create an object of the Son class named nakai.
	Son nakai;
	//Then we take that object and add an action through a function that is stored in the
	//Son.cpp file. This function has access to the member variables in the Father and can
	//initialize them within the Son.cpp file with its own values.
	nakai.protectedDemo();

	cout << "And this demonstrates the Fathers object access: " << "\n" << endl;
	//This just demonstrates that Father objects have access to ALL members of the Father class.
	Father stepAdam;
	stepAdam.fatherObjAllAccess();

	

}