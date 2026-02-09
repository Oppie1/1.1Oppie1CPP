#include <iostream>
using namespace std;


//Example of using ||(or) operator and if else statement to gauge whether person can enter a tradeshow
//*Person enters their age through cin statement. The number of tokens is already hard coded and so do not need user to enter in.

int main() {
	
	int age;//This is storage variable for user input
	int tokens = 33;//This is how many tokens users within that group have.

	
	cout << "You must be at least be 33 years old or have at 40 or more tokens to enter online tradeshow." << endl;
	cout << "Please enter your age:\n";//Prompt user for their age
	cin >> age;//Store that value in int age variable to be tested in the if statement


	if (age > 33 || tokens >= 40) {//This is an example of || (or) operator. This says that a person needs to be over 33 OR
		//have a least 40 or more tokens to enter the show.
		cout << "You are allowed in to the tradeshow." << endl;
	}

	else {//I even one of the criteria is not met this message will display below.
		cout << "You either don't meet age requirement or do not have enough tokens to participate in online tradeshow." << endl;
	}

	cout << "\n---Back In main()---" << endl;
	cout << "This just shows that once if/else statement has executed control goes back to main() for next step in program." << endl;
}