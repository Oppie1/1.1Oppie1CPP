#include <iostream>
#include "Claudia.h"
using namespace std;


//Tutorial: Member Initializers
//Member Initializer lists are used to initialized local variables BEFORE function definition. In between 
//the () -> (parameters) and function definition -> ({function definition}). Below we use an object and its parameters
//which are connected to the header file (remember acts like a blueprint) and the Claudia.cpp file. When this object is called
//the arguments (3, 87) are passed into the prototype -> (int a, int b). From there the we initialize the variables that are
//stored in main. So 'a' is set = to regVar and 'b' is set = to constVar. const/constant variables MUST use member initializer list.
//
//We then use the object and . separator to call and print the function located in .cpp/function defintion.

int main() {

	Claudia cv(3, 87);
	cv.printInitlzdVarToScrn();
}