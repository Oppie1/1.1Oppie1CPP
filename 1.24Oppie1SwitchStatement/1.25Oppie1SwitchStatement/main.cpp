#include <iostream>
using namespace std;


//Example of a switch statement / code block

int main()
{

	int age;//This is the storage variable that will hold the users input. An integer (int).

	cout << "Please enter your age:" << endl;
	cin >> age;//The "cin" statement asks the user for a value which will be tested in the following switch statement

	switch (age) {//The switch statement opens up a codeblock. It has "age" as its parameter which was established to be an int (above)

	case 15://This establishes the "case" of the number 15 that is tested against the parameter (age)
		cout << "You can get your learners permit." << endl;//This will be read to screen if user enters 15.
		break;//This key word means to break out of codeblock and go to next step in the program
		//It is necessary because without it the program would unnecessarily print the other cout statements for case 16 and
		//case 18 along with the default keyword cout statement. We want it to only print the case the user entered and then
		//break out of codeblock and go to next step in program.

	case 16://This again is just saying within the switches parameter (age) -> switch (age) if user enters 16 do this (print cout)
		cout << "You can get your drivers license." << endl;//cout to screen
		break;//break out of codeblock if the user entered 16

	case 18://If user enters 18...
		cout << "You can now vote." << endl;
		break;

	default://This is the umbrella key word to catch all values not accounted for in cases (all numbers except 15,16,18
		cout << "This is the default statement when none of the ages apply\n" << endl;
	}

	cout << "-----Back in main()-----\n";
	cout << "This is displayed after switch code block as control goes back to main() and whatever code/code blocks may be next" << endl;
	cout << "In this program it's just this cout statement to show where program goes after a code block" << endl;
}