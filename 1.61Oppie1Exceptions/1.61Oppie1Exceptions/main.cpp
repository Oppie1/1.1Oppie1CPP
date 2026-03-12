#include <iostream>
using namespace std;


//Tutorial: Exception handling.  In exception handling we use throw and catch keywords. Similar
//how a function outside of main may "return" something to main this works within main program often
//to handle errors in main() without crashing the program. Here the error code 99 would have a
//meaning. Perhaps the user may have to look-up what the 99 error code was and handle it accordingly
//before program can continue. It basically allows programmer to spot something mid program before the
//user. Perhaps the user is entering information that is out of scope or bounds of the program. Rather
//than having program crash entirely this is like a flag before that happens.

int main() {

	cout << "Create an error handler/code try/catch that will stop the program without crashing" << endl;

	//try is basically saying run this bit of code
	try {

		//Here we create 2 storage variables mother and son. Logically we know the son cannot be
		//older than tha mom so this would be a backend programmers mistake.
		int momsAge = 51;
		int sonsAge = 67;
		
		//We test this with an if statement and if the if statement is true we throw the error code
		//to the next bit of code (the catch block).
		if (sonsAge > momsAge) {
			throw 99;
		}
	
	}
	
	//So the throw is like returning a value but we are returning it to "catch" block. And so we this
	//happens (try is true) catch uses the int "x" parameter to set x to 99,
	catch (int x) {

		//Error shows to screen rather than crashing program.
		cout << "Son can not be older than mom, ERROR NUMBER: " << x << endl;
	}

	//In this try, catch, through we cin information which means it would be the user making the 
	//mistake in the front end of the program. Perhaps they accidently enter the wrong information.
	//So here the user entered in an daughter's age that is greater than her father. NOT possible!

	//Again, try just means run this bit of code.
	try {

	int dadsAge;
	int daughtersAge;

	cout << "\nPlease enter dads age:\n" << endl;
	cin >> dadsAge;

	cout << "\nNow please enter Daughters age:" << endl;
	cin >> daughtersAge;

	//Because this if statement is true the "throw" exectutes and error number 92 is sent to the 
	//catch block.
	if (daughtersAge > dadsAge) {
		throw 92;
	}
//If the if condition is false then the catch is not executed and this line of code runs normally (no error).
	cout << "The dads age is: " << dadsAge << " Daughters age is: "<<daughtersAge << endl;

}

	//The catch block awaits the throw and places the 92 its int x placeholder effectively setting
	//the value of x here to 99.
catch (int x) {

	cout << "\nDaughter can not be older than dad, ERROR NUMBER: " << x << endl;
}

}

