#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;


//Here we use the function People(string name, Birthday dateOfBirthObj) of the People class
//Flow: People(class) "::" scope-> (look in people class for this function -> People(function).

//Use member initializer list : and proper in between before codeblock syntax
//Define the People constructor of the People class with parameters name and Birthday (with Birthday object from main)
//CODE:
 
	
	//Using "m_" before name is good practice when initializing member variables from function
	//prototypes. Makes it easy to read. Flow: from main() -> ("claudia") -> name in parameter() above ->
	//->Then set that name to m_name -> sets the variable in private: in . h file to Claudia.
	//() not =

//Initialize the name and dateOfBirthObj variable member initializer style.
//CODE:
	

	//Flow: from main() ->("claudia") -> name in parameter() above -> then set that name to m_name 0>
	//-> sets the variable in private: in .h file to the date of birth (11,01,1981)
//Initialize dateOfBirthobj member initializer style and then empty codeblock/
//CODE:


//This is the function where everything comes together we use information from the People.cpp file, 
//arguments from main, a sentence we make to complete the sentence and the Birthday.cpp file to print
//a complete sentence to the screen. This function even contains a function from the Birthday class!
// Remember, functions are like mini-programs in a way. All the info
//from around all the files of the program are assembled nicely here. main() calls out to this function
//it runs and prints to the screen then returns control to main.

//Define a void printInfo variable of the People class.
//CODE:


	//Make a cout statement the displays the name MEMBER(hint) variable and " was born on"  to screen.
	//CODE:


		//This goes out to the birthday class and says "hey, run this function please!"

	//Call the print date function on the MEMBER(hint) dateOfBirthObj
	//CODE:
