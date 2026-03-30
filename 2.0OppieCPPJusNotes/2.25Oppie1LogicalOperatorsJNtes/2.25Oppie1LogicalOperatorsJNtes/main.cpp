#include <iostream>
using namespace std;


//Example of using ||(or) operator and if else statement to gauge whether person can enter a tradeshow
//*Person enters their age through cin statement. The number of tokens is already hard coded and so do not need user to enter in.

int main() {

	//Create integer variable to store age from users input.
	//CODE:
	int age;

	//Create another integer variable to hold the number of tokens on the backend of the code.
	//CODE:
	int tokens = 47;

	cout << "You must be at least be 29 years old or have 40 or more tokens to enter online tradeshow." << endl;

	//Create a cout statement the prompts user to enter an age.
	//CODE:
	cout << "Please enter your age: " << endl;

	//Create a cin statement the will take the user input and store it in age variable.
	//CODE:
		cin >> age;

	//Create an if statement that compares age to 33 in that if the age is equal to or greater than 33 the person can enter the tradeshow. 
	//Then use the "or" (||) operator the another condition where tokens is greater than or equal to 40.
	//CODE:
	if (age > 29 || tokens >= 40) {

		//Create a cout statement within the if codeblock that displays to the screen that user is allowed in the online tradeshow.
		//CODE:
		cout << "You are either old enough or rich enough to enter tradeshow." << endl;
	}


	//Create an else statement  that prints a message to the screen if person/user is not able to enter the tradeshow because they were
	// ither too young OR they did not have enough tokens and so the(if statement fails and message in the if block is skipped)
	//CODE:
	else {
		cout << "You were neither old or rich enough to enter tradeshow " << endl;
	}

	//Create a cout statement that prints to the screen that the after the if control has fully execute and message has displayed to 
	//screen that the program goes to the next code after the codeblock. The next step in the program.
	//CODE:
	cout << "Now that either if or else executed the program goes to the next step in main which here is just this cout statement." << endl;
}