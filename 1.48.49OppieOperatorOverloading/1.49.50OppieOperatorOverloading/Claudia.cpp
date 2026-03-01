#include <iostream>
#include "Claudia.h"
using namespace std;


//When called an object is created via this constructor. It is initialized to 0 by using the member
//initializer list. Could initialize within the body {} body of the function like num = 0 but
//this way is more efficient
Claudia::Claudia()  : num(0) {

}

//Then in this function we use this prototype and the arguments from main to set the value of a and b
//When the c object is created its value will be 0 here.
Claudia::Claudia(int z) {
	num = z;
}

//And the meat of this tutorial. This function the first Claudia is saying the data type. We are 
// Making an object from the Claudia class. The second is a pointer to the Claudia class which in
// there "looks in" (::) the claudia class to do its work. It finds the operator^ function and
// runs it with c (object) from main as its parameter.
Claudia Claudia::operator^(Claudia b) {
	//Now we run the function to and return "newObject" with a numerical value - here we overwrote
	//the ^ operator to be an +. Remember, functions are like mini programs so dont over complicate
	//things. This just a function that creates an object, makes a call using that object and the 
	//. operator and sets the ^ to a + sign and tells main how to handle the ^ when it sees it.
	//So here in main when it calls c = a^b it immediately goes here and runs what we really want to
	//do and that is add not raise to something.
	Claudia newObject;
	//So this line runs and we get c = a(num object) + b(b.num object)
	//The "a" is implisit when you see operator^ just know it means 1st object.operator^
	newObject.num = num + b.num;
	//No we just return newObject in place of c with a value of adding the two objects a and b together.
	return(newObject);
}