#include <iostream>
using namespace std;


//You can use this variable inside main or any function in your program using "::" which is the unary
//scope resolution operator, it allows program to use "global" variables (outside main() and functions)

//Create/declare a new global int variable then initialize it to 33.
//CODE:


//Create a void function that say "This is a global variable tuna, it is a function outside main, then display the the tuna variable to screen.
//CODE:


int main()
{
	//Create/declare a local int variable tuna (can be same name as global variable) and initialize it to 20.
	//CODE:
	

	//"::" means use the global tuna (33) not local tuna (20) 
	//"::" is the unary scope resolution operator. When used in main (or other function)
	// it is telling the computer that we want to access the global variable which is outside
	// main() { code here } -> remember in reality main is a function as well that has variables,
	// code blocks, function calls, etc. inside of it.
	// Whenever we create a variable inside a function
	// like int tuna = 20; we can only use can on

	//Create a cout statement that describes being within main but accessing the global tuna variable (and its value 33)using
	//"::" -> scope resolution operator.
	//CODE:
	

	//Create a cout statement that using the local variable within main to print the tuna variable (and its value) out to screen.
	//CODE:
	

	cout << "\n---I am example of function outside main using the global variable int tuna---" << endl;
	//The following just shows main calling to the void function, void means doesn't return anything,
	//main() calls to function it does something and that is it. This just shows that even functions
	//outside of main can use global variables.
	
	//Call the function outside main. It will execute here and print its contents (cout/sentence to screen).
	//CODE:
	

}