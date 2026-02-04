#include <iostream>
using namespace std;


//This is the if else lesson. The main point here is using each statement in conjunction with the other.  Rather than using another if statement
//we use an else if so that the if statements remain bundled together and then we can perform another check via a control statement. Example below:

int main()
{
	int age = 123;

	//These two if statements provide a check for an age between two values

	if (age > 133) {//This takes care of the upper limit for age.  What to do with the immortals.

		cout << "We start out with a standard if statement to find maximum age pool 134+ \n";
	}

	//**It's important to note that when age is greater than 133 which is also greater than 100 these are mutually exclusive. Meaning the 
	//when the if statement above executes the code stops there and does not give the other statements (if,else if,else) to execute.

	else if (age > 100) {
			cout << "Wow you're over 100 years old but less than 133!. We use two if statements to find a group of people out many people\n";
		}

		
	//This else if statement checks for third possibility. 
	//**If we just used another if statement the statement above would print since age is greater than 1 and is greater than 100
	//to screen also when we only wanted the statement below to print.
	//Again if the else if statement above (age<100) executes the program never gets to this point and so the statement below is not printed even 
	//the an age can be both greater than 2 and greater than 100 at same time.
	else if (age > 2) {
				cout << "Here we find the find the lower tier/minimum number group of people.  \n";
				
			}

			//Then we can use an else statement by itself as an umbrella to catch any information that is not covered by if and else if statements
			//on the lower end.
			else {
				cout << "Here we find if the age is 1 year old or younger. " << endl;
			}
	return 0;
		}



//Key point: When a statement is true and exectute none of the statments below it will exectute because the program stops at a true control statement