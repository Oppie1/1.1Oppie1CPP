#pragma once
#include "Father.h"


//This demonstrates how to make the Son a derived class of the Father class.
//In this example the Father is the base class that can be built from. It
//"shares" all  the information in its class (blueprint) EXCEPT for the private
//variable. Son does not have access to private variables.

class Son: public Father
{
public:
	//This function prototype is defined in the Son.cpp file. It initializes variables
	//and stores those values in the variables located in the Father class.
	void protectedDemo();
};

