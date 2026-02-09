#include <iostream>
#include<cstdlib>//This library contains the "rand" keyword
#include <ctime>//This allows us access a time in the past to seed our random number generator from via the current time.
using namespace std;



int main()
{
	srand(time(0));//"srand" means "seed with random number" -> the time (time(0));  parameter just tells the srand function
	//to start at current time.
	cout << "The following prints 9 unique numbers to the screen:\n" << endl;

	//Here the for loop keeps updating what iteration "x" we are on. It keeps looping through the x = 9. 
		//Each time the middle condition is true program prints out cout statement. On the 10th iteration (x = 10) fails
		//  the loop condition of x<10. For example:
		//x = 1 -> x < 10, true -> execute code block THEN increment step 1++ = 2 (x++) And so x = 2 to start the next loop
		//x = 2-> x<10, true -> execute code block THEN increment step 2++(x++) -> 2+1= 3. And so x = 3 to start the next loop
		//For loop keeps printing out cout statement and then incrementing x until x = 10
	for (int x = 1; x < 10; x++) {
		
		//The cout statment needs to add "1" to whatever random number is generated from %6 to account for if there turns out
		// to be no remainder. Again, %6 means we are dividing the random number by six but only printing out the remainder to 
		//the screen. The random numbers will be 1 - 6 not 1 - 10. When you divide by a number the numbers you will get will 
		//be no more than the number you are dividing by.  Using "6" is like using a standard dice.
		//Go ahead and play with the modulus divisor by putting 3 to see that the random number will now be 1 - 3.

		//We print out which number is the random number by printing "x" in cout statement.
		cout << x << " ------ " << 1 + rand() % 6 << endl;
	}

	cout << "\nYou have just made a random number generator. It prints 9 unique #s to the screen. Program has exited " << endl;
	cout << "for loop code block and returned to main() { for loop block exists within main block). " << endl;
}