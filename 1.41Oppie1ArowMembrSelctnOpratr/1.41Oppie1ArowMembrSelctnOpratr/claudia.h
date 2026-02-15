#pragma once


//The Claudia class declaratoin (header file).
//A class is a blueprint - it declares  *what* members exist
//The actual definitions (implementations) live in Claudia.cpp and must match this order

class Claudia
{
public:

	//Default constructor - prototype declared here, defined in .cpp file
	Claudia();

	//Member function prototype. "void" means it returns nothing to the caller
	void printedFromCpp();
};

