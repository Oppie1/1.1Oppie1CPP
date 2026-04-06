#pragma once


//This is a blueprint/outline of the mother member variables and functions
class Mother
{

public:
	//Default constructor: initializes a Mother object with no parameters.
	Mother();

	//A pulic member function. When called, it prints the family's last name.
	//Because it is public, derived classes (like Son) inherit access to it.
	void sayOurLastName();

};

