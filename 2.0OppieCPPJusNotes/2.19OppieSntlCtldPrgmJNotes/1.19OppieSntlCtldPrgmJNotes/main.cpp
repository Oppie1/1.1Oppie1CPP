#include <iostream>
using namespace std;



//This program shows how to use a sentinel control variable to stop/exit the program. When the while loop is running
//It performs the actions within the curly braces{}. The moment that the while loop control/condition is not true the
//body (inside curly braces { do this / mini program  } ) does not execute and program goes to next step in main() which
//is a couple of cout statements. Those statements retrieve the information/values stored in the variables at 
// top (int age, ageTotal, numberOfPeopleEntered) of main()/program.
//!= means does not equal

//GPT Codex: This program demonstrates a sentinel-controlled loop that accepts ages until the user enters -1
//The loop body keeps a running total of years and a count of people, then exits as soon as the sentinel value
//(-1) is provided so the final summary can be printed without additional input

int main()
{

	//This is a storage variable that keeps track of age. It is "tested" in while loop. If user enters -1 the while
	//loop condition would fail and the program would exit the while loop code block to go to next step. Which here is to show
	//output to screen of number of people entered as well as a expression that would show their average age.
	
	//Create an integer variable to hold age from user input (cin statement).
	//CODE:
	

	//This keeps total of the total ages (number of years) that can be used in an expression to figure out the average age of group
	
	//Create a variable that tracks/holds the running total of the ages that the user enters.
	//CODE:
	

	//Here the number of of people is tracked via using the increment (++) operator. This will be used alongside ageTotal (total years)
	//in an expression to get average age -> total number of years / number of people.
	
	//Create a variable that tracks/keeps a running total of the number of people entered.
	//CODE:

	
	cout << "Enter first persons age or -1 to quit. " << endl;
	//Here we get our first age before entering while loop
	
	//Create a line of code that will cin the user data.
	//CODE:
	

	//We enter the while loop and will only exit when the loop condition/control fails when age -1 != -1. Again, a while loop is 
	//saying so long as this is true do this. So seems backwards here because we are using the != (does not equal operator)
	// but the bottom line if age DOES = -1 the loop control is false and the while loop terminates. 

	//Create a wile loop in a way that will have a sentinel control variable that when entered by the user instead of an age the program stops and
	//moves to next code/part in the program. The code block contained by the while loop should have an expression that keeps track of the total
	//age(s) and then adds the next age the user entered so long as the sentinel variable (use -1 here) is entered. Then in next portion of the while
	//codeblock iterate the number of people entered variable by 1 (++).
	//CODE:
	

		//Here the age total starts at 0 so -> an example would be if user inputs 3 -> ageTotal = 0 + 3 = 3 -> ageTotal now = 3
		//Second pass lets say user enters 12 -> ageTotal = 3 + 12 = 15 -> Now age total (int ageTotal) increases to 3.
		//Again, the int ageTotal is a storage variable that tracks the age and updates anytime a user enters an age into the program.
		
		//Expression that tracks the total age.
		//CODE:
		
	
		//Key point: Remember that two things are happening in the while loop. 1. Getting input from user and storing it 2. Tracking
		//how many people have been entered by adding 1 (++) each time a person's age is entered.

		//So on first pass 0 people have been entered and so numberOfPeopleEntered on first pass would be 0++ -> 0 + 1 = 1 person entered
		
		//Increment operator to track number of people.
		//CODE:
		

		//After increment we go to next step which is to prompt user to enter in the next age. When they have done this the program
		//immediately goes back to top of while loop with all storage variables updated and then test the age to determine whether
		//To execute (proceed with) code block.

		//Create a cout statement within the while code block at the end that prompts the user to enter another person or -1 to quit.
		//CODE:
		

		//Create cin statement to enter the next persons age.
		//CODE:
		

	//Once the user enters -1 since -> -1!=-1 Is false because it does = -1. The while loop/code block stops and goes onto next step
	//in program. Which again here is to take the stored information and output it to screen.
	
//Create a cout statement that runs after the while loop has fully executed (sentinel is entered) that shows out the number of people entered to screen.
	//CODE:
	

	//This shows we can use expressions within the cout statement to show pertinent information to user.

	//Create a cout statement that shows the average age of all the people entered (make an expression within the cout statement).
	//CODE:
	

}