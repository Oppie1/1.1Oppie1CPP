#pragma once


//The Claudia class declaration (header file).
//A class is a blueprint - it declares  *what* members exist
//The actual definitions (implementations) live in Claudia.cpp and must match this order

//Declare a claudia class
//CODE:
class Claudia{

//Declare a public access specifier.
//CODE:
public:

	//Default constructor - prototype declared here, defined in .cpp file
	//Declare a constructor(/constructor prototype)
	//CODE:
	Claudia();

	//Member function prototype. "void" means it returns nothing to the caller
	//Declare a void member function (function prototype) -> print from cpp file lingo
	//CODE:
	void printedFromCpp();

};
