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

	//JUST NOTES SUMMARY OF ACTIONS CODE.
	//Use the try/throw/catch keywords to test, throw and catch an error number and print statement to screen.
	//Must declare two in variables and initialize them to 51 and 67 (moms and son age respectively). 
	//Use an if statement to validate Son's age does not exceed mom's age. Use catch keyword with parameter of x
	//to print a message that son cannot be older than mother to the screen along with the error (x) code to screen.

	//Use try keyword to create a codeblock that will have variables and nested if statement with throw.
	//CODE:


		//Here we create 2 storage variables mother and son. Logically we know the son cannot be
		//older than tha mom so this would be a backend programmers mistake.

		//Declare and initialize two storage variables that store the ages momsAge and sonsAge.
		//CODE:


		//We test this with an if statement and if the if statement is true we throw the error code
		//to the next bit of code (the catch block).

		//Use an if statement to validate/check sonsAge doesn't exceed mom's age. Within the if statement use 
		//the throw key word with the number 99 (integer/int) to throw 99 to catch block or if not true skip if block.
		//The catch block will also be skipped and so program will go to next step in code.
		//CODE:


			//Use throw keyword and 99 (int) that will execute within codeblock with TRUE.
	//CODE:

	//So the throw is like returning a value but we are returning it to "catch" block. And so we this
	//happens (try is true) catch uses the int "x" parameter to set x to 99,

	//Use catch keyword with a parameter of int x that will take the integer from throw (here 99) and show
	//a cout statement to the screen saying Son cant be older than mom and ERROR NUMBER x
	//CODE:


		//Error shows to screen rather than crashing program.
		//CODE:


	//In this try, catch, through we cin information which means it would be the user making the 
	//mistake in the front end of the program. Perhaps they accidently enter the wrong information.
	//So here the user entered in an daughter's age that is greater than her father. NOT possible!

	//Again, try just means run this bit of code.

	//Use another try, catch and throw keywords with dads and daughters ages but this time use a cout
	//statements that prompt the user plus cin statements to collect the age data from dad and daughter.
	//If try/throw if statement is true and daughter age is more than fathers then an ERROR 92 will show to screen.
	//If it is false then right after if in the next line of code will show in a cout statement that the
	//dads age is: dadsAge and the daughters age is: daughtersAGE


	//Use the try keyword again.
	//CODE:


		//Declare two int variables dadsAge and daughtersAge
		//CODE:


		//Add a cout statement to prompt user for dads age and then a cin statement to retrieve data into int dadsAge variable
		//CODE:


		//Add a cout statement to prompt user for daughters age and then a cin statement to retrieve data into daughtersAge Variable
				//CODE:

		//Because this if statement is true the "throw" exceptions and error number 92 is sent to the 
		//catch block.

		//Use if statement to check to see if the daughtersAge is greater than the dads. Then a throw keyword with 92
		//that will execute (ERROR) if true.
		//CODE:


			//If the if condition is false then the catch is not executed and this line of code runs normally (no error).


		//Add cout statement that says what dads age is with dadsAge variable and same thing for daughter


		//The catch block awaits the throw and places the 92 its int x placeholder effectively setting
		//the value of x here to 99.

	//Use the catch keyword with an integer parameter variable integer x
	//CODE:


		//Add cout statement that says dad can not be older than daughter to the screen with "x" error number
		//CODE:

}