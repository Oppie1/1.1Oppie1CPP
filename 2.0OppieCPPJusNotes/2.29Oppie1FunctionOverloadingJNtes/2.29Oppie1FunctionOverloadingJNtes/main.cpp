#include<iostream>
#include<iomanip>
using namespace std;


//This tutorial demonstrates that when we create functions outside of classes that the "call" within
//main() that contains the argument the computer "chooses" which function outside of class to use
//by the data type within main() via calls argument (what's inside the parenthesis -> 
//-> printNumber(this is the argument(s)

//Here this function will execute any call that has an integer (int) in its argument

//Create a void function with an integer variable as its parameter. Then include a cout statement that says printing an integer to 
//the screen. Then see that variable out to screen.
//CODE:

//We could use a float as it would take up less space but would sacrifice precision. We use a 
//double here because this will also overload an actual number that is not labeled (3.14) which 
//automatically defaults to double not a float.<< fixed << setprecision(15) <- Use + x


//Create a void function with the same function name but with a double variable as its parameter. Then include a cout statement
//that says printing a double to the screen. Then see that variable out to the screen.
//CODE:


//Here this function will execute any call that has a float (# that contains decimal) This works
// because variable b is initialized as a float. We do this when space is a priority << fixed << setprecision(15) <- Use + x


//Create a void function with the same function name but with a float variable as its parameter. Then include a cout statement
//that says printing float out to the screen. Then see that variable out to the screen. 


int main()
{
	//Create/declare 3 variables a, b and c that represent an int, float, double and set them to 54, 32.4896 and 3.141592653589 respectively.
	//CODE:
	
	//CODE:

	//CODE:


	//So in an overload the when computer sees argument using variable a which here is initialized to
	//an int it knows to use the function that contains an int parameter

	//Call the a function with "a" variable as its argument.
	//CODE:


	//In this overload b is initialized to be a float and so the computer knows to use the function
	//that has the float parameter -> (float x)

	//Call a function with "b" variable as its argument.
	//CODE:


	//Whole numbers like this are int by default
	
	//Call a function with "c" as its argument.
	//CODE:


	//Call a function with "13" as its argument.
	//CODE:
	

	//Here we have to use a double because this is the actual number/literal and is not initialized
	//to anything like b was when we delt with the float.
	//So this will overload and the computer knows to use the function with the (double x) parameter

	//Call a function with 3.14 as its argument.
	//CODE:


}

//Key point: This tutorial shows that although we are using variable 'x' in functions above main
//it really is just acting like a placeholder for the other variables/information.