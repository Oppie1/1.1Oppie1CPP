#include <iostream>
using namespace std;



//This program shows how to use a sentinel control variable to stop/exit the program. When the while loop is running
//It performs the actions within the curly braces{}. The moment that the while loop control/condition is not true the
//body (inside curly braces { do this / mini program  } ) does not execute and program goes to next step in main() which
//is a couple of cout statements. Those statements retrieve the information/values stored in the variables at 
// top (int age, ageTotal, numberOfPeopleEntered) of main()/program.
//!= means does not equal

//GPT Codex: This program demonstrates a sentinal-controlled loop that accepts ages until the user enters -1
//The loop body keeps a running total of years and a count of people, then exits as soon as the sentinal value
//(-1) is provided so the final summary can be printed without additional input

int main()
{

	//This is a storage variable that keeps track of age. It is "tested" in while loop. If user enters -1 the while
	//loop condition would fail and the program would exit the while loop code block to go to next step. Which here is to show
	//output to screen of number of people entered as well as a expression that would show their average age.
	int age;
	//This keeps total of the total ages (number of years) that can be used in an expression to figure out the average age of group
	int ageTotal = 0;
	//Here the number of of people is tracked via using the increment (++) operator. This will be used alongside ageTotal (total years)
	//in an expression to get average age -> total number of years / number of people
	int numberOfPeopleEntered = 0;


	cout << "Enter first persons age or -1 to quit " << endl;
	//Here we get our first age before entering while loop
	cin >> age;

	//We enter the while loop and will only exit when the loop condition/control fails when age -1 != -1. Again, a while loop is 
	//saying so long as this is true do this. So seems backwards here because we are using the != (does not equal operator)
	// but the bottom line if age DOES = -1 the loop control is false and the while loop terminates. 
	while (age != -1) {
		//Here the age total starts at 0 so -> an example would be if user inputs 3 -> ageTotal = 0 + 3 = 3 -> ageTotal now = 3
		//Second pass lets say user enters 12 -> ageTotal = 3 + 12 = 15 -> Now age total (int ageTotal) increases to 3.
		//Again, the int ageTotal is a storage variable that tracks the age and updates anytime a user enters an age into the program
		ageTotal = ageTotal + age;
		//Key point: Remember that two things are happening in the while loop. 1. Getting input from user and storing it 2. Tracking
		//how many people have been entered by adding 1 (++) each time a person's age is entered.

		//So on first pass 0 people have been entered and so numberOfPeopleEntered on first pass would be 0++ -> 0 + 1 = 1 person entered
		numberOfPeopleEntered++;
		//After increament we go to next step which is to prompt user to enter in the next age. When they have done this the program
		//immediately goes back to top of while loop with all storage variables updated and then test the age to determine whether
		//To execute (proceed with) code block.

		cout << "Enter next persons age or -1 to quit" << endl;
		cin >> age;
	}

	//Once the user enters -1 since -> -1!=-1 Is false because it does = -1. The while loop/code block stops and goes onto next step
	//in program. Which again here is to take the stored information and output it to screen.
	cout << "Number of people entered: " << numberOfPeopleEntered << endl;
	//This shows we can use expressions within the cout statement to show pertinant information to user
	cout << "Average age: " << ageTotal / numberOfPeopleEntered << endl;
}