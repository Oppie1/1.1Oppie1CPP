#include <iostream>
using namespace std;


//Example of a switch statement / code block

int main()
{

	//This is the storage variable that will hold the users input. An integer (int).
	//Create a variable the will store an age.
	//CODE:
	int age;

	//Create a welcome statement asking for age from user.
	//CODE:
	cout << "Please enter an age." << endl;

	//The "cin" statement asks the user for a value which will be tested in the following switch statement
	//Create a cin statement to fill the variable age with user input.
	//CODE:
	cin >> age;

	//The switch statement opens up a codeblock. It has "age" as its parameter which was established to be an int (above)
	//Create a switch statement with the parameter of age that will scroll through cases and compare the input from user
	//with those cases.
	//CODE:
	switch (age) {

		//This establishes the "case" of when the user inputs the number 15: that is tested against the parameter (age)
		//Create a case 15 then prints a cout statement to the screen saying "User Entered 15".
		//Then use the break; keyword to prevent fall through to next cases since user already made their selection/input 15.
		//CODE:
	case 15:
		

		//Create your cout statement
		//CODE:
		cout << "User entered 15 " << endl;

		//Create your break keyword to prevent fall through
		//CODE:
		break;

		//This key word means to break out of codeblock and go to next step in the program
		//It is necessary because without it the program would unnecessarily print the other cout statements for case 16 and
		//case 18 along with the default keyword cout statement. We want it to only print the case the user entered and then
		//break out of codeblock and go to next step in program.

		//Create a case for a user input of 16 as well as a cout statement saying "User entered 16" and then the break keyword for fall through.
		//CODE:
	case 16:

		//This again is just saying within the switches parameter (age) -> switch (age) if user enters 16 do this (print cout)
		//Create cout statement that shows what user selected (16) to screen.
		//CODE:
		cout << "User entered 16 " << endl;

		//break out of codeblock if the user entered 16
		//CODE:
		break;

		//Create a case if the user enters 18, a cout statement saying "User entered 18", and finally a break;
		//Code:
	case 18:

		//CODE:
		cout << "User entered 18 " << endl;

		//CODE:
		break;

		//Use a default keyword to cover all other user inputs (all other numbers) using default keyword.
		//This is the umbrella key word to catch all values not accounted for in cases (all numbers except 15,16,18
		//Create a default line of code that captures all other user input. Then a cout statement saying
		// "User did not enter 15, 16, 17.
		//CODE:
	default: 
		
		cout << "User did not enter 15, 16, 18 " << endl;

	}

	//Create a cout statement to let user know they are back in main and out side of the switch code block. The switch
	//statement has fully executed.
	//CODE:
	cout << "The switch statement has fully executed and control has returned to main() here. next step AFTER code block " << endl;

}