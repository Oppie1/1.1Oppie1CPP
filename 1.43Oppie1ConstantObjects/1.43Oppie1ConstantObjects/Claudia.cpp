#include <iostream>
#include "Claudia.h"
using namespace std;


//Here we create a blank Claudia function of from the Claudia class. Remember the order:
//Claudia(class) -> :: scope resolution operator - tells computer to look in Claudia class for this function -> Claudia(function)
Claudia::Claudia() {

}

//This is just a normal function of the claudia class. It follows the same syntax as the constructor function above and is a void
//so returns nothing to main. Main calls it via cvo object, it runs outside of main, then returns control to main().
//So again the format is -> void(return type) -> Claudia(class) -> :: scope resolution operator -> normalObject(function)
void  Claudia::normalObject() {

	cout << "I am a regular function printing from the Claudia.cpp file. I can be called upon with normal syntax." << endl;

}

//The following is a constant function. A constant function must follow the same syntax in both the header file and in main() by
//using the const keyword. So the syntax is a bit different but other than that it is the same syntax as the previous two functions:
//The format is void(return type) -> Claudia(class) -> :: scope resolution operator -> constantObject(function)const(keyword)  
void Claudia::constantObject()const {
	
	cout << "I am a constant function printing from the Claudia.cpp file - I cannot execute unless explicitly written" << endl;
	cout << "in syntax of header and main file." << endl;
}

//A reason we would want to use a constant function is if we only want a given function to be used exclusively by constant objects
//and not used in regular objects.