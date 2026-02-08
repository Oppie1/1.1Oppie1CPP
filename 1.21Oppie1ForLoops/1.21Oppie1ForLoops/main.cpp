#include <iostream>
using namespace std;


//Key point: The for loop must fully execute (go through all iterations/loops) prior to moving onto next piece of program or 
//following code.

int main()
{
	cout << "Here we constructor a for loop that will print numbers (5-25) to screen then will go back to main program." << endl;
	//It is important to note that often computer program will use blocks of code (like this for loop) to perform actions one
	//after another "stacking" the blocks. So in essense they are "nested" within main. Here is an example of just one block
	//of code running and then control being returned to main.
	

	//You can initialize a variable (here x) to a value within the conditional statement
	//Here we initialize x to 5 and then move to the control which is x is less than (<) = 30
	//The code block after the for loop will execute (here just print x to screen). Key reasoning is 
	//that the middle of the for loop - called the control - determines whether to move onto next step or
	//whether to exit loop and go to next piece of the program. If the control is true and the code block executes
	//the next step (third section of loop) will be to increment x (here increase by 5 - same concept as x++ but with number)
	for (int x = 5; x < 30; x += 5) {
		//So at first pass x is = to 5 which is less than 50. The loop goes into codeblock at that point and executes whatever
		//code therein lies within. Here it is a cout statement that prints the current value of x (here 5) to screen.
		//After 5 is printed to screen the next step is the third section of the for loop which is to increase by 5. And so
		//x then becomes 10 so can look at it like this now for(int x = 10; 10<30;10+5)
		//So in second pass where x = 10 it is less than 30 and so enters codeblock and prints 10 to screen and then increments
		//by 5 -> 10+5 = 15 -> x=15 to start the next loop. This loop keeps running until x = 50 because at that point we would
		//have: for(x=30;30<30? FALSE. So the for loop would stop as it had been fully executed and therefore would not go into
		//codeblock or increment step. It would simply go to next part of code in program.

		cout << x << endl;
//The first output would be 5. Then the loop will keep looping and printing out to screen like so 5,10,15,20,25. Then
//The loop will have completed and go to next part of code (Here congratulations statement_
	}

	cout << "\nGreat job! The loop has fully executed and you are now back in the main program :)" << endl;
}