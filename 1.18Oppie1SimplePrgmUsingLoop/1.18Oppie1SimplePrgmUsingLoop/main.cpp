#include <iostream>
using namespace std;


//This program demonstrates the concept using local storage variables to store information and while loop. Some which we set (initialized)
//At the start of program and also information that is input by the user as the program runs (cin)

//REMEMBER: functions act like little programs and so as long as the while loop function runs it is gathering information and
//returning values to the variables in main()

int main()
{

	int x = 1;//This storage variable will start out at 1. It has been "initialized". "x" is just keeping a running 
	//tally/number to check what number loop we are on. It does not impact "total" That is a separate action in function
	int number;//This variable is empty and its value will be established by user inputs
	int total = 0;//This is a variable 0 as its starting value that will account for the running "total"/sum of the user inputs
	//"total" has been initialized to 0

	//KEY POINT -> two things are happening here that are separate. 1. x is keeping a running tally on loop number 
	//2. number and total are adding user inputs and getting a sum that will be displayed after the while loop has fully run/executed

	cout << "Please enter 5 numbers pressing enter after each input: " << endl;
	//So the first pass x = 1 which is less than 5 and so the while loop will run/execute
	while (x <= 5) {
		
		cin >> number;//Reads the next user value into the loop-local storage named number. int number.
		//When talking about functions/programs they have their own storage to ensure programs are self contained with
		//the information that is being gathered or actions happening in the program.

		//We take total which has 0 as its starting and add the first number that the user inputs. Lets say they enter 3 for first pass:
		//total = 0 + 3 -> total now = 3. We then go to increment step (remember "x" is keeping a tally and does not impact total)
		total = total + number;

		//++ operator means "increase by 1"
		//Now we increment x by 1 so x now = 1 + 1 = 2. x = 2 -> We go back up to top for our 2nd loop. The looping 3,4,5 will all 
		//run and the program will get its total on the 5th iteration. On the 6th iteration where x = 6 the while loop test/condition
		//will fail and the while loop will stop and the program will continue to next step. Which here is to display the total in 
		//the main()
		x++;
		
	}

	cout << "Your total is " << total<< endl;

	return 0;
}

//KEY POINT:  Understand that in reality main is itself a codeblock and has code and often many code blocks in it all doing 
//different things to build the program.