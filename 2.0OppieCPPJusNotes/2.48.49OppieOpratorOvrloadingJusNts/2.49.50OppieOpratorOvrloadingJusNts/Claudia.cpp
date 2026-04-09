#include <iostream>
#include "Claudia.h"
using namespace std;


//When called an object is created via this constructor. It is initialized to 0 by using the member
//initializer list. Could initialize within the body {} body of the function like num = 0 but
//this way is more efficient.

//Define the default (blank) Claudia constructor of the Claudia class. Initialize (not assign) the member variable num to 0 using 
//member initializer list - this is more efficient than assigning it in the function body.
//CODE:


//Then in this function we use this prototype and the arguments from main to set the value of a and b
//When the c object is created its value will be 0 here.

//Define a Claudia function with integer parameter. Then assign that int parameter value to num in the body of definition.
//CODE:


//And the meat of this tutorial. This function the first Claudia is saying the data type. We are 
// Making an object from the Claudia class. The second is a pointer to the Claudia class which in
// there "looks in" (::) the Claudia class to do its work. It finds the operator^ function and
// runs it with c (object) from main as its parameter.

//Define the operator^ function for the Claudia class. The first Claudia is the return type - this function returns a Claudia
// object and takes anotherClaudia object(b) as its parameter. 
//CODE:


	//Now we run the function to and return "newObject" with a numerical value - here we overwrote
	//the ^ operator to be an +. Remember, functions are like mini programs so dont over complicate
	//things. This just a function that creates an object, makes a call using that object and the 
	//. operator and sets the ^ to a + sign and tells main how to handle the ^ when it sees it.
	//So here in main when it calls c = a^b it immediately goes here and runs what we really want to
	//do and that is add not raise to something.

//Make/instantiate/create a newObject of the Claudia class.
//CODE:
	


	//Access and assign the num member variable of the newObject to the sum of the implicit (a) and the parameter (b) num
	//So this line runs and we get c = a(num object) + b(b.num object)
	//The "a" is implicit when you see operator^ just know it means 1st object.operator^ call on that object you just 
	// created a num (implicit c) variable and set it equal to the first num variable (implicit a) plus the 
//second num variable(b). 
//CODE:


	//Now we just return newObject in place of c with a value of adding the two objects a and b together.

//Return with new object as parameter.
//CODE:


//Define the operator^ function for the Claudia class that returns a Claudia object and accepts a Claudia object (b) as its parameter

//This clarifies that:
//The first Claudia = return type
//The second Claudia:: = which class owns this function (look in).
//operator^ the overloaded operator
//(Claudia b) = the parameter

