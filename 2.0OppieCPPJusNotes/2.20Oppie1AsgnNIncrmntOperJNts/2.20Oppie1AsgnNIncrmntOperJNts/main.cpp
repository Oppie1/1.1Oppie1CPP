#include <iostream>
using namespace std;




int main()
{

	//Storage variables
	//Create three storage variables x, y and z and set each to a value.
	//CODE:
	
	
	//Here x starts 20
	//Here y starts at 30
	//z starts at 10

	//Example of increment operator "++" (after or before variable) which means add by 1
	cout << "Example of increment operator that ++ happens after x -> x++ so x still = \n";

	//Create a line of code that increments x AFTER the variable with increment operator (++) and shows it out to screen (same time) in cout.
	//CODE:
	
	
	//Output will be 20 since ++ (increment by 1) happens AFTER as the ++ signs are behind the variable (here x)
	cout << "Now the 'x' has been incremented in operation above x++ and so has increased by one:\n";

	//Create a cout statement that displays just x to the screen to see if value changed.
	//CODE:
	
	
	//So now the output here will be 21

	cout << "\nThis example shows the increment (++) takes place BEFORE the variable y -> So a changes with cout statement output:\n";
	
	//Create a variable that is incremented (increment operator (++)) before the variable y out the the screen at same time.
	//CODE:
	;

	//This shows what happens when ++ happens BEFORE the variable and so the output will be 31

	//Create a line of code that shows just the value of y to the screen.
	//CODE:
	
	
	//Here it just shows the same as above 31 since the increment has already happened and "a" has changed

	//Example below are using the modulus '%' operator
	cout << "\nThe modulus operator is '%' expression is saying divide by but only give the remainder - here we use a variable 'z'\n";
	cout << "But we can use a value alone (second example)\n";
	
	//Create a line of code that prints to screen what happens when z is modulus (%) by 3
	//CODE:
	

	//Create a line of code that shows when the number 10 is modulus (%) by 3
	//CODE:
	

}

//Declaration = int x; -> Tells compiler about variable
//Initialization = int x = 20;->First value given at creation
//Assignment = x = 20;-> Any value change after creation

//A handy way to remember it:
//Initialization = first value, at birth of the variable
//Assignment = any value set later in life.