#include <iostream>
using namespace std;


//You can use this variable inside main or any function in your program using "::" which is the unary
//scope resolution operator, it allows program to use "global" variables (outside main() and functions)

int tuna = 33;

void exampleFunction() {
	cout << "Example of using global variable (tuna)  in function outside main():\n" << ::tuna << endl;
}


int main()
{
	int tuna = 20;

	//"::" means use the global tuna (33) not local tuna (20) 
	//"::" is the unary scope resolution operator. When used in main (or other function)
	// it is telling the computer that we want to access the global variable which is outside
	// main() { code here } -> remember in reality main is a function as well that has variables,
	// code blocks, function calls, etc. inside of it.
	// Whenever we create a variable inside a function
	// like int tuna = 20; we can only use can on
	cout <<"I am global int tuna (using :: operator) variable from within main(){ }:\n" << ::tuna << endl; 
	cout << "\nI am tuna variable inside main without :: that can only be used here:\n" << tuna << endl;
	
	cout << "\n---I am example of function outside main using the global variable int tuna---" << endl;
	//The following just shows main calling to the void function, void means doesn't return anything,
	//main() calls to function it does something and that is it. This just shows that even functions
	//outside of main can use global variables.
	exampleFunction();
	
}