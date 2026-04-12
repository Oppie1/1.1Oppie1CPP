#include <iostream>
using namespace std;


//Tutorial: More on exceptions.  The "..." operator used with catch is  a "catch-all". In other words catch whatever "throw"
//sends to it. So here we use a character which is then thrown to the "catch-block" which runs/executes as normal.
//This also demonstrates we can use a char variable in throw by setting it to an integer (here 0)

int main() {

	//Use try Keyword/block
	//CODE:
	try {

		//We just need to initialize the char to a integer value to match num1 and num2 int variables.
		//Declare char variable f and initialize it to 0
		//CODE:
		char f = 0;

		//Declare an uninitialized int variable named num1.
		//CODE
		int num1;

		//Prompt user for first number with cout statement.
		//CODE:
		cout << "Please enter a number: " << endl;

		//Use cin statement to store user input into num1 variable
		//CODE:
		cin >> num1;

		//Declare an uninitialized int variable named num2.
		//CODE:
		int num2;

		//Prompt user for the second number.
		//CODE:
		cout << "Please enter a second number: " << endl;

		//cin  user input and store it in num2
		cin >> num2;

		//This is just saying if num2 is 0 the if statement condition is true and to execute throw there by sending f to the
		//catch block.  We cannot divide by 0.  If this were false and a number is used then the if block is skipped and the answer 
		//is shown to the screen. The catch block has nothing "thrown" to it so does not run and show message to screen.

		//Use if statement with throw keyword to test if the second user input (num2) is 0
		//CODE:
		if (num2 == 0) {

			//Use throw with f as what the code block executes if true
				//CODE:
			throw f;
		}
		//In next part of code block which will execute if the if statement is false (after if code block).
		//Add a cout statement to the screen the the answer is:
		//CODE:
		cout << "\nWhen those two numbers are divided together we get: " << endl;

		//Use a cout statement and an expression num1 divided by num 2 to show the answer out to the screen.
		//CODE:
		cout << num1 / num2 << endl;
	}
	//Again, if the if block is true then f is thrown to the catch block and it runs. If it is false this portion is skipped as 
	//nothing is thrown two it which is needed to fill the parameter and for this function to run and print message to screen.

	//Use the catch all block ... with a cout statement that one cannot divide by 0.
	//CODE:

	catch (...) {
		cout << "You cannot divided by 0." << endl;

	}

}