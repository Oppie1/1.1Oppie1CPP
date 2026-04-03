#include <iostream>
#include "Claudia.h"
using namespace std;


//Here we create a blank Claudia function of from the Claudia class. Remember the order:
//Claudia(class) -> :: scope resolution operator - tells computer to look in Claudia class for this function -> Claudia(function)

//Define the blank Claudia constructor of the Claudia class which has no parameters
//CODE:


//This is just a normal function of the claudia class. It follows the same syntax as the constructor function above and is a void
//so returns nothing to main. Main calls it via cvo object, it runs outside of main, then returns control to main().
//So again the format is -> void(return type) -> Claudia(class) -> :: scope resolution operator -> normalObject(function)

//Define the void normalObject function of the Claudia class with no parameters with a cout statement saying its a regular function
//printing from the .cpp file within its codeblock. 
//CODE:


//The following is a constant function. A constant function must follow the same syntax in both the header file and in main() by
//using the const keyword. So the syntax is a bit different but other than that it is the same syntax as the previous two functions:
//The format is void(return type) -> Claudia(class) -> :: scope resolution operator -> constantObject(function)const(keyword) 

//Define the void constantObject function of the Claudia class in proper syntax. Then within the codeblock display a cout
// stating that it is a constant function printing from the .cpp file. Must be explicitly written to execute in the header and main file.
//CODE:


//A reason we would want to use a constant function is if we only want a given function to be used exclusively by constant objects
//and not used in regular objects.