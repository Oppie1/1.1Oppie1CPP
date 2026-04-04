#include <iostream>
#include "Claudia.h"
using namespace std;

//These are the function definitions and member initializer list. Notice the similarities to header file. On way to look at it
//is that the header file outlines everything in a more vertical fashion. One of the main points to take note of is that
//ahead of EACH function we need put the class name (here Claudia) it is telling the function where to look (here in the class located
//in the header file under class Claudia. The "::" (scope resolution operator) you can think of like an arrow saying:
//Class(Claudia here)  (::) -> constructor ->Claudia(int a, int b) : here (weird spot)initialize variables (a)(b){ do this code (blank in this instance}
// Even thought the body is left empty it is important to not that when this constructor is run it is like creating a box(object) with
// 2 tools in it already -> : regVar(a)(3) and constVar(b)(87). The ":" here is saying "add this to the box"
//

//So this function (second Claudia (int a, int b) from the Claudia class (first Claudia). Takes the variables from the arguments
//in main (3,87) and assigns them to variables a and be which are then initialized.
//Define the constructor with member initializers and initialize the the int variables parameters of constructor declaration.
//CODE:



//This just acts as a traditional function we are familiar with. When it executes in gets the values that are stored in "private:"
//int the header. "private:" is called an access specifier -> in this instance only members of the Claudia class can access
//These values can not be directly call on from main the program would fail.

//Define the void function from the header with no parameters.
//CODE:


//Make a cout statement that states and shows to screen -> The regular variable is: , the const variable is:,
//CODE:
