#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;

//If this is left blank C++ automatically creates a default constructor.
//A Father object is created initialized to nothing. A blank object that can be
//built on/in. Due to inheritance when the Son object is created this automatically runs first.

//That said, here we created a function that demonstrates that Father objects have access
//To ALL member variables and functions within its class.

void Father::fatherObjAllAccess() {

	//Father has access to this.
	publicV = 4;
	//And this.
	protectedV = 5;
	//As well as private member variable here as it is part of the father class.
	privateV = 6;

	//This just prints all the information that the father has access to to the screen.
	cout << "The public variable is: " << publicV << "\n" << endl;
	cout << "The protected variable is: " << protectedV << "\n" << endl;
	cout << "The private variable is: " << privateV << "\n" << endl;
}