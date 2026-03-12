#include <iostream>
using namespace std;


//Tutorial: More on exceptions.  The "..." operator used with catch is  a "catch-all". In other words catch whatever "throw"
//sends to it. So here we use a character which is then thrown to the "catch-block" which runs/executes as normal.

int main() {

	try {

		//We just need to initialize the char to a integer value to match num1 and num2 int variables.
		char f = 0;

		int num1;
		cout << "Enter first number: " << endl;

		cin >> num1;
		int num2;

		cout << "Enter second number: " << endl;
		cin >> num2;

		//This is just saying if num2 is 0 the if statment condition is true and to execute throw there by sending f to the
		//catch block.  We cannot divide by 0.  If this were false and a number is used then the if block is skipped and 
		//the answer is shown to the screen. The catch block has nothing "thrown" to it so does not run and show message to screen.
		if (num2 == 0) {
			throw f;
		}

		cout << "\nThe answer is: " << endl;
		cout << num1 / num2 << endl;
	
	}

	//Again, if the if block is true then f is thrown to the catch block and it runs. If it is false this portion is skipped as 
	//nothing is thrown two it wheich is needed to fill the parameter and for this function to run and print message to screen.
	catch (...) {

		cout << "\nYou cant divide by 0 " << endl;
	}
}