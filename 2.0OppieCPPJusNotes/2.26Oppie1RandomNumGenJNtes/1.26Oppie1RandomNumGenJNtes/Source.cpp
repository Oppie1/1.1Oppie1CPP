#include <iostream>
#include<cstdlib>//This library contains the "rand" keyword
#include <ctime>//This allows us access a time in the past to seed our random number generator from via the current time.
using namespace std;



int main()
{

	//"srand" means "seed with random number" -> the time (time(0));  parameter just tells the srand function
	//to start at current time.
	//Create an srand() function that seeds the random number generator using time() function.
	//CODE:
	

	//Create a cout statement that states the following are 9 unique numbers.
	//CODE:
	

	//Here the for loop keeps updating what iteration "x" we are on. It keeps looping through the x = 9. 
		//Each time the middle condition is true program prints out cout statement. On the 10th iteration (x = 10) fails
		//  the loop condition of x<10. For example:
		//x = 1 -> x < 10, true -> execute code block THEN increment step 1++ = 2 (x++) And so x = 2 to start the next loop
		//x = 2-> x<10, true -> execute code block THEN increment step 2++(x++) -> 2+1= 3. And so x = 3 to start the next loop
		//For loop keeps printing out cout statement and then incrementing x until x = 10

	//Create a for loop that initializes x to 1 and prints 9 numbers to the screen.
	//CODE:
	

		//The cout statement needs to add "1" to whatever random number is generated from %6 to account for if there turns out
		// to be no remainder. Again, %6 means we are dividing the random number by six but only printing out the remainder to 
		//the screen. The random numbers will be 1 - 6 not 1 - 10. When you divide by a number the numbers you will get will 
		//be no more than the number you are dividing by.  Using "6" is like using a standard dice.
		//Go ahead and play with the modulus divisor by putting 3 to see that the random number will now be 1 - 3.

		//We print out which number is the random number by printing "x" in cout statement.
		//Create a cout statement that shows the value of x at given iteration then prints the random number associated with x
		//The expression in the cout statement that shows 1 + rand function to compensate for th "0" index thn by % 6 to set 
		//whatever the randoms number remainder is 1-6 like a dice. Can use other % #s for remainders here we just chose 6

	//CODE:
	

	//Create a cout statement the notifies the for loop has fully executed and tha this is the next step in the program after the for loops code block
	//CODE:


}