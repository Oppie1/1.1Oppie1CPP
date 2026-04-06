#include <iostream>
#include "Mother.h"//Required so the compiler knows the Mother class declaration
using namespace std;


//Define the Mother constructor with no parameters of the Mother class.
//CODE:


//The constructor doesnt enable other functions - it creates the object that owns those functions.
//The functions become usable as a side effect of the object existing, not because the constructor
//directly hands them out.

//This functions sole purpose is to print a message out to screen. This is the definition of the prototype
//found in the header. In inheritance the derived class (here Son) also has access to this function

//Define void sayOurLastName function with no parameters that just prints out our last name is Villa to the screen
//CODE:
