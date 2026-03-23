#include<iostream>
using namespace std;


int main() {

	//Relational operators are <  and >
	// "=" is an assignment operator
	//Relational or Comparison operational operators == (equals) and != (does not equal)
	//The whole if statement is called a "control flow statement"
	//The part inside() is called the "condition"
	//The part inside {} is called the  code block.
	//An if statement has a condition() and a code block in {}

	//Declare and initialize two int variables which will be used at the end of the program
	int a = 98;
	int b = 76;

	//Create if statement using the "<" less than operator with a cout statement in the code block if "if" statement is true.
	if (3 < 5) {
		
		cout << "1. 5 is less than 3 example is true.\n" << endl;
	}

	//Create if statement using the ">=" less than operator with a cout message in code block because statement is true.
	if (3 >= 3) {
		cout <<  "2. Here we use >= sign and this will display if value is greater than or equal to another value(here 3)\n"<< endl;
	}

	//Create an if statement that is false with message in code block that will not print out because if is not true.
	//definition will not show to screen. See bonus at bottom.
	if (7 < 3) {
		cout << "3. Notice this will not display to screen because it is a false statement (7 is greater '>' than 3 " << endl;
	}

	//Create a this value "equals" that value (==) 
	if (3 == 3) {
		cout << "4. Here the if condition (3==3 is true and so will display to screen.\n" << endl;
	}

	//Create an if condition using the 5 !=8 and a cout statment to go with when true.
	if (5 != 8) {
		cout << "5. Here we use '!=' -> this does NOT equal that.\n" << endl;
	}

	//Use the variables from the top of the program (int a and int b -> so just a and b) which will be true and print them out
	//to the screen.
	if (a > b) {
		cout << "6. a (98) is greater than b (76) so this code executes.\n" << endl;
	}
}

//Once you have run the program to see which information is displayed adjust the if statements if(adjust condition here) and 
//rerun program how what happens to the output of each statement.
//Hint: The third if code block cout statement is missing! Lets see if you can make it appear in the output in your adjusted code :)
//Bonus: See if you can make #4 not appear in output to screen.