#include <iostream>
using namespace std;


//This is a demonstration of using a factorial finder to find the output of a factorial

//This is the the factorial finder function using int data type with a parameter of (int x)
int factorialFinder(int x) {
	if (x == 1) {//This if statement is skipped so long as x DOES NOT equal 1. If it does the program finishes.
		return 1;
	}

	else {//So again if "x" in the function calls argument in main is any number other than 1 the code below will run.
		//In this example the argument for the parameter x value is 4 and so the line of code below executes and sends
		//the answer back to main.
		return x * factorialFinder(x - 1);
		//So for the first revolution of the else condition we have 4 * factorialFinder(4-1) and so:
		//4 * factorialFinder(3). Since we don't know what factorialFinder(3) is we must exit the else code block back
		//into the int factorialFinder(int x) code block with int x now = 3 -> int factorialFinder(3) and then we solve that
		//function which would be factorialFinder(2) and so -> 2 * factorialFinder(2-1). Then this is tested in the if statement
		//and is true so the program stops and returns 1; At this point the computer can now solve all the waiting functions
		//that are sitting in a stack just outside the else block but within the int factorialFinder(int x) codeblock (see below)

	}
	//Each time the else condition runs the return value sits here on the stack and so first we have
	// 4 * factorialFinder(3); on the top of the stack.
	//Then we have 3 * factorialFinder(2) which gets put on the stack. Finally we have to solve for 2 * factorialFinder(1).
	//factorialFinder(1) is tested in the if statement as x==1 and so true which returns one to the outer codeblock.

	//IMPORTANT: The if statement return value is to the factorialFinder function. Not to main. The if and else sit within the
	//code block of the factorialFinder function but the if statement return value is returning to the function itself NOT
	//to main.  The stacked factorialFinder functions that sit just outside the else code block execute LIFO (last in first out)
	//So x=1 solves the factorialFinder 2 then 3 then 4. And so, 
	//factorialFinder(1) = 1. factorialFinder(2) = 2 (2*2). factorialFinder(3) = 6 (3*2). factorialFinder(4) = 24 (3*4)
}

int main()
{
	//So remember that the call gets replaced with whatever value the function returns. So here factorialFinder(4) is 24
	//which is output to screen.
	cout <<"The factorial of 4 is: " << factorialFinder(4) << endl;
}