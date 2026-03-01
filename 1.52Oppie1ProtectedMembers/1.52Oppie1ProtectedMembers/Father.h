#pragma once



//We create a Father class as the base class like a blueprint or .cpp to follow. 
//Only objects of the Father class can access ALL members (public, private, public)
//ALL variables and functions of the Father class.
// 
//One exception to that rule is having a derived class. Here the
//Son class is a derived class of the Father. So here objects built from the Son class
//will have access to the Father class variables and functions.  That said it will only 
//have access to the public and protected members. Not the private members of father class.
class Father
{
public:
	//This is the function prototype which is defined in Father.cpp file
	//This will not work for a Son object as the function contains private information.
	void fatherObjAllAccess();
	
	//Father and Son both have access to this.
	int publicV;

protected:
	//Father and Son both have access to this as well.
	int protectedV;

private:
	//Only father objects have access to members that are in private.
	int privateV;
};

