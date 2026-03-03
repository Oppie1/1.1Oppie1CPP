#include <iostream>
using namespace std;


//Function templates with parameters declare our template has TWO parameter data types.
//Below we have two placeholders FIRST and Second for data types.
//Templates are like a cookie cutter that can make different shapes on different types of dough.

template <class FIRST, class SECOND>

//Here we will return a "FIRST" data type whatever that is. So this is just saying whatever is 
//entered first in the argument (here x and y) we will be using that data type. So here x is declared
//as an int so we will use the int data type instead of double. By doing so when y is shown out 
//to screen because it is smaller C++ will truncate the decimal 
FIRST smaller(FIRST a, SECOND b) {

//Here we use a ternary operator as a short hand if/else statement. This function will return the smaller
// of x and y below. This return is a place holder for data type a and b which will match x and y data types,
	return(a < b ? a : b);
}


int main() {
	
	int x = 89;
	//Even though y is a double becaus a/x is declared first in the argument/prototype and is declared
	//as an it an int NOT a double data type is returned.
	double y = 56.78;

	//This is a function call with arguments x and y. Their values are declared above as x = int. 
	//x here matches the parameters "a" from prototype/definition. The other argument is y value which
	//is declared as a double. y = double. 
	//This call is answered by the function -> FIRST smaller(FIRST a, SECOND b)'s return value:
	//return(89<56 ? (return) 89 : (else) 56) -> Just 56 since 56.78 is trucated.
	cout << smaller(x, y) << endl;
}