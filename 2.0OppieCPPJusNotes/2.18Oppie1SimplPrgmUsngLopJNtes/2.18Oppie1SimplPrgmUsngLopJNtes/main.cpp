#include <iostream>
using namespace std;


//This program demonstrates the concept using local storage variables to store information and while loop. Some which we set (initialized)
//At the start of program and also information that is input by the user as the program runs (cin)

//REMEMBER: functions act like little programs and so as long as the while loop function runs it is gathering information and
//returning values to the variables in main()

int main()
{

	//Create a integer variable x that is initialized/set to 1
	//CODE:

	
	//This storage variable will start out at 1. It has been "initialized". "x" is just keeping a running 
	//tally/number to check what number loop we are on. It does not impact "total" That is a separate action in function

	//Create a integer variable "number". That is not initialized.
	//CODE:
	

	//This variable is empty and its value will be established by user inputs

	//Create a integer value "total" and set it equal to 0.
	//CODE:
	

	//This is a variable 0 as its starting value that will account for the running "total"/sum of the user inputs
	//"total" has been initialized to 0

	//KEY POINT -> two things are happening here that are separate. 1. x is keeping a running tally on loop number 
	//2. number and total are adding user inputs and getting a sum that will be displayed after the while loop has fully run/executed

	
	//So the first pass x = 1 which is less than 5 and so the while loop will run/execute
	//Create a while loop the will continue to run so long as "x" is less than 5.
	//CODE:
	

	//In the while loop -> Create a cin statement to store the user input information into the integer number variable.
	//CODE:
		
	
	//Reads the next user value into the loop-local storage named number. int number.
		//When talking about functions/programs they have their own storage to ensure programs are self contained with
		//the information that is being gathered or actions happening in the program.

		//We take total which has 0 as its starting and add the first number that the user inputs. Lets say they enter 3 for first pass:
		//total = 0 + 3 -> total now = 3. We then go to increment step (remember "x" is keeping a tally and does not impact total)
	//Create an expression that will keep a running total of the users inputs from the storage variables you made.
	//CODE:
	

		//++ operator means "increase by 1"
		//Now we increment x by 1 so x now = 1 + 1 = 2. x = 2 -> We go back up to top for our 2nd loop. The looping 3,4,5 will all 
		//run and the program will get its total on the 5th iteration. On the 6th iteration where x = 6 the while loop test/condition
		//will fail and the while loop will stop and the program will continue to next step. Which here is to display the total in 
		//the main()
	//Iterate x by 1
	//CODE:
	

	//Create a cout statement that prints to screen a message and the file total of all the user inputs.
//CODE:


	return 0;
}

//KEY POINT:  Understand that in reality main is itself a codeblock and has code and often many code blocks in it all doing 
//different things to build the program.