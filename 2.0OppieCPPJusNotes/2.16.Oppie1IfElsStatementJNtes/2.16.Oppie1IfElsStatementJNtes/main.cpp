#include <iostream>
using namespace std;


//This is the if else lesson. The main point here is using each statement in conjunction with the other.  Rather than using another if statement
//we use an else if so that the if statements remain bundled together and then we can perform another check via a control statement. Example below:

int main()
{

	//Create a integer variable and set the age to 123.
	//CODE:
	

	//Create an if statement (control statement) with the condition of the variable age being more than 133
	//Then create a cout statement that says "You're older than 133" *This is not true so will be skipped.
	//CODE:


	//This takes care of the upper limit for age.  What to do with the immortals.

	//**It's important to note that when age is greater than 133 which is also greater than 100 these are mutually exclusive. Meaning the 
	//when the if statement above executes the code stops there and does not give the other statements (if,else if,else) to execute.

	//Create an else if statement to test for an age over 100 and prints a declaration/description of that to the screen.
	//CODE:


	//This else if statement checks for third possibility. 
	//**If we just used another if statement the statement above would print since age is greater than 1 and is greater than 100
	//to screen also when we only wanted the statement below to print.
	//Again if the else if statement above (age<100) executes the program never gets to this point and so the statement below is not printed even 
	//the an age can be both greater than 2 and greater than 100 at same time.

	//Create another else if statement if the persons age is over 2 years old and a declaration/description of that.
	//CODE:


	//Then we can use an else statement by itself as an umbrella to catch any information that is not covered by if and else if statements
	//on the lower end.

	//Create a final else statement to catch the remainder of possibilities. Here just to cover the people 1 or under.
	//The print/cout a statement to describe what the else statement does.
	//CODE:
	
	
	return 0;
}



//Key point: When a statement is true and execute none of the statements below it will execute because the program stops at a true control statement