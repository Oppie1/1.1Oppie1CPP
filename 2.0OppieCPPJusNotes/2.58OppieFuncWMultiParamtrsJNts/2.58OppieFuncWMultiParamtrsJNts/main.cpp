#include <iostream>
using namespace std;


//Function templates with parameters declare our template has TWO parameter data types.
//Below we have two placeholders FIRST and Second for data types.
//Templates are like a cookie cutter that can make different shapes on different types of dough.

//Declare a template for the  FIRST and SECOND class.
//CODE:


//Here we will return a "FIRST" data type whatever that is. So this is just saying whatever is 
//entered first in the argument (here x and y) we will be using that data type. So here x is declared
//as an int so we will use the int data type instead of double. By doing so when y is shown out 
//to screen because it is smaller C++ will truncate the decimal 

//Declare a smaller() function that returns type FIRST, taking parameter a of the FIRST and parameter b of type SECOND.
//CODE:


//Here we use a ternary operator as a shorthand if/else statement. This function will return the smaller
//This return is a placeholder for data type a and b. The return type resolves to whatever concrete type FIRST is bound to
//the call site. a and b match types x and y respectively (int and double) but the return type is always FIRST. only a's 
//type int determines the return type not both.

//Make a return statement that says a is less than b return a and if not (else) return b. Use ternary operator.
//CODE:


int main() {

	//Declare an integer x and initialize it to 89.
	//CODE:


	//Even though y is a double because a/x is declared first in the argument/prototype and is declared
	//as an it an int NOT a double data type is returned.

	//Declare a double y and initialize it to 56.78.
	//CODE:
	

	//This is a function call with arguments x and y. Their values are declared above as x = int. 
	//x here matches the parameters "a" from prototype/definition. The other argument is y value which
	//is declared as a double. y = double. 
	//This call is answered by the function -> FIRST smaller(FIRST a, SECOND b)'s return value:
	//return(89<56 ? (return) 89 : (else) 56) -> Just 56 since 56.78 is truncated.

	//Add cout statement to screen a function call smaller() with x and y as parameters
	//CODE:

}