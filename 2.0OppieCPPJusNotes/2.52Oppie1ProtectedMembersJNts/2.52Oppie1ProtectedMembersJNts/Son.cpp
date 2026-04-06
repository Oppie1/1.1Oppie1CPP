#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;

//This is a function that will run the to initialize the object created by the Son. The
//Values will actually be stored in the Father's private member variables.

//Define void protectedDemo function of Son class with no parameters 
//CODE:


	//Assign a value of 1 to variable publicV
	//CODE:


	//Assign a value of 1 to variable publicV
	//CODE:


	//*If private were not commented out (below) this program would fail* 
	//privateV = 3;

	//This just prints the information from the demo to the screen (except private of course)

	//Add two cout statement stating the public and then private variables is : publicV and Protected V
	//CODE:


	//This would not work as it tries to access private information from Father Class.
	//cout << "The public variable is: " << privateV << "\n;" << endl;
}