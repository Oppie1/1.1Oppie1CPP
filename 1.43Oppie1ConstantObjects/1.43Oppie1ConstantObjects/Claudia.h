#pragma once

class Claudia
{
public:

	//This default constructor. Whether it is defined in main or not this will automatically create a blank object. Remember an 
	//object is like a box with nothing in it. Just the box that can hold items (tools from last example). For sake of C++
	//it can hold functions, variables and things of that nature.
	Claudia();
	
	//This is just a normal object and a void function. Again, void just means when main calls it it performs it's action outside
	//of main and returns no data. Only returns control of program. Like a mini-program main asks to do something,
	void normalObject();

	//This is a constant object. Programs may want to use this to insure the function DOES NOT change. The syntax is a bit different
	//with writing const in between the curly braces and the start of the definition. It also must follow similar syntax in main.
	// The function definition must follow this labeling or the program will not make the connections to .cpp/.h files and may not run. 
	void constantObject()const;


protected:
private:

};

