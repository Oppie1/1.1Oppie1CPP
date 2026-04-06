#pragma once



//We create a Father class as the base class like a blueprint or .cpp to follow. 
//Only objects of the Father class can access ALL members (public, private, public)
//ALL variables and functions of the Father class.
// 
//One exception to that rule is having a derived class. Here the
//Son class is a derived class of the Father. So here objects built from the Son class
//will have access to the Father class variables and functions.  That said it will only 
//have access to the public and protected members. Not the private members of father class.

//Declare a Father class
//CODE:


//Declare a public access specifier.
//CODE:


	//This is the function prototype which is defined in Father.cpp file

//Declare a void function fatherObjAllAccess
//CODE:
	

	//Father and Son both have access to this variable
//Declare an integer public access variable named publicV
//CODE:	
	

//Declare a protected access specifier named protected.
//CODE:


	//Father and Son both have access to this as well.
//Declare a integer variable named protectedV
//CODE:
	

	//This will not work for a Son object as the function contains private information.
//Declare a private access specifier
//CODE:


	//Only father objects have access to members that are in private.
//Declare a private integer variable name privateV
//CODE:
