#include <iostream>
#include "Mother.h"//Required so the compiler knows the Mother class declaration
using namespace std;


//
Mother::Mother()
{
	
}
// The constructor doesnt enable other functions - it creates the object that owns those functions.
//The functions become usable as a side effect of the object existing, not because the constructor
//directly hands them out.

//This functions sole purpose is to print a message out to screen. This is the definition of the prototype
//found in the header. In inheritance the derived class (here Son) also has access to this function
void Mother::sayOurLastName() {
	cout << "Our last name is Villa." << endl;
}