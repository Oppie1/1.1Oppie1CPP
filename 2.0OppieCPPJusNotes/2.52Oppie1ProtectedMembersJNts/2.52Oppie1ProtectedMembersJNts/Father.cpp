#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;

//If this is left blank C++ automatically creates a default constructor.
//A Father object is created initialized to nothing. A blank object that can be
//built on/in. Due to inheritance when the Son object is created this automatically runs first.

//That said, here we created a function that demonstrates that Father objects have access
//To ALL member variables and functions within its class.

//Define a void function of the Father class name fatherObjAllAccess with no parameters
//CODE:


	//Father has access to this.
	//Assign the variable named publicV to 4
	//CODE:
	
	
	//Assign the variable named protectedV to 5
	//CODE:


	//Assign the variable named privateV to 6
	//CODE:
	

	//This just prints all the information that the father has access to to the screen.

//Create 3 cout statements that state which variable it is (public, protected, private) and then prints each variable (with V at end) to screen.
