#pragma once
#include "Father.h"//This is needed to tether the Son class to the Father.




//Create a derived class of the Father. Here the Son is the derived class : and the public Father is the base. When a Son object is 
//created the father constructor runs automatically before the rest of the Son class executes.

//Programmers often copy and paste the class into the .cpp file as a guide and then define the functions/variable members accordingly.

//Declare a derived class named Son with the Father being the base class
//CODE:


	//Declare a public access specifier.
	//CODE:


	//This runs automatically when the Son object is created (after father constructor).
//Declare a Son constructor with no parameters
//CODE:


	//This runs last but before the Father destructor.
//Declare a Son destructor with no parameters
//CODE:
