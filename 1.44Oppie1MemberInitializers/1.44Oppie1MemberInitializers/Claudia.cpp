#include <iostream>
#include "Claudia.h"
using namespace std;

//These are the function definitions and member initializer list. Notice the similarities to header file. On way to look at it
//is that the header file outlines everything in a more vertical fashion. One of the main points to take note of is that
//ahead of EACH function we need put the class name (here Claudia) it is telling the function where to look (here in the class located
//in the header file under class Claudia. The "::" (scope resolution operator) you can think of like an arrow saying:
//Look in class(Claudia here)  (::) -> look at this function (here Claudia(int a, int b) initialize variables {do this}
// Even thought the body is left empty it is important to not that when this constructor is run it is like creating a box(object) with
// 2 tools in it already -> : regVar(a)(3) and constVar(b)(87). The ":" here is saying "add this to the box"
//

//So this function (second Claudia (int a, int b) from the Claudia class (first Claudia). Takes the variables from the arguments
//in main (3,87) and assigns them to variables a and be which are then initialized.
Claudia::Claudia(int a, int b)
:regVar(a),//Here 'a' is initialized to regVar
constVar(b)//Here 'b' is initialized to constVar
{

}

//This just acts as a traditional function we are familiar with. When it executes in gets the values that are stored in "private:"
//int the header. "private:" is called an access specifier -> in this instance only members of the Claudia class can access
//These values can not be directly call on from main the program would fail.
void Claudia::printInitlzdVarToScrn() {

	cout << "The regular variable is: " << regVar << " const variable is: " << constVar << endl;
}