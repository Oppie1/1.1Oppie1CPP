#pragma once



//Create a class of claudia as a blueprint for the program. Remember copying and pasting this outline
//into the .cpp file can help as a guide that you fill in with the remainder of the syntax.
class Claudia
{
public:
	//This is an int variable that will be used to store a number.
	int num;
	//This is the claudia constructor that will automatically run when an object of the 
	//Claudia class in called in main. Remember it's like an empty box. But here when an 
	//object is created its num value is set to "0" in the member initializer list. Even though
	//you see the constructor with empty parameters here when it runs it pulls info from the 
	//.cpp file where the function definition is located.
	Claudia();
	
	//This function has a parameter of an integer. So in main the call must have an integer or the program
	//wont run
	Claudia(int);
	//This is the meat of the tutorial. This is the prototype that uses the key word operator followed
	//by the symbol you would like to overload to tell the computer to expect this symbol to NOT
	//represent what it normally does. It will carry a different definition that we will cover in the
	//.cpp file. It carries a parameter of the Claudia class and creates an object cvo as its parameter
	//(Claudia b)-> makes a object of the claudia class and there for runs the constructor to set
	//that object to 0. So object "c" in main is like the parameter here in this tutorial.
	//So if the function does not have an object as its parameter the program will fail.
	Claudia operator^(Claudia b);
};

