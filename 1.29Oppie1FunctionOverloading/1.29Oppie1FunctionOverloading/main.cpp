#include<iostream>
using namespace std;


//This tutorial demonstrates that when we create functions outside of classes that the "call" within
//main() that contains the argument the computer "chooses" which function outide of class to use
//by the data type within main() via calls argument (what's inside the parenthesis -> 
//-> printNumber(this is the argument(s)

//Here this function will execute any call that has an integer (int) in its argument
void printNumber(int x) {
	cout << "\nI am printing an integer:\n" << x << endl;
}


//We could use a float as it would take up less space but would sacrifice precision. We use a 
//double here because this will also overload an actual number that is not labeled (3.14) which 
//automatically defaults to double not a float.
void printNumber(double x) {
	cout << "\nNow I am printing a double:\n" << x << endl;
}

//Here this function will execute any call that has a float (# that contains decimal)
//This works because variable b is initialized as a float. We do this when space is a priority
void printNumber(float x) {
	cout << "\nNow I am printing a float:\n" << x << endl;
}

int main()
{
	int a = 54;//This initializes the variable 'a' to an integer (int) value
	float b = 32.4896;//This initializes the variable 'b' to a float (decimal) value

	//So in an overload the when computer sees argument using variable a which here is initialized to
	//an int it knows to use the function that contains an int parameter
	printNumber(a);
	//In this overload b is initialized to be a float and so the computer knows to use the function
	//that has the float parameter -> (float x)
	printNumber(b);

	//Whole numbers like this are int by default
	printNumber(13);
	//Here we have to use a double because this is the actual number/literal and is not initilized
	//to anything like b was when we delt with the float.
	//So this will overload and the computer knows to use the function with the (double x) parameter
	printNumber(3.14);
	
}

//Key point: This tutorial shows that although we are using variable 'x' in functions above main
//it really is just acting like a placeholder for the other variables/information.