#include <iostream>
using namespace std;

//In function templates we create class templates that can work with multiple pieces of information at once
//It allows an object to use the same function with different data types.

//Here is an example of a template class. You MUST use the keyword "template" with angle bracket <  >
//syntax or the program will not work.  You're functionally creating a class of a class to deal with 
//different types of data.

//Declare a template for class T. template keyword<class T> no comma.
//CODE:


//So here the Adam class is a member of the T class.

//Declare a Adam class.
//CODE:


	//Here we tell computer the the members first and second are members of the Adam class but both use
	//the data type T from first of the template class T. These are storage variables whos information will 
	//be used when the template<class> is defined below.

	//Declare two member variables first and second of type T.
	//CODE:


	//Here we set the parameters of the Adam class and initialize the variables to type T

	//Declare a public access specifier.
	//CODE:


	//Declare a constructor (constructor declaration) Adam with the parameters T a and T b and assign first and second member
	//variables to those parameters respectively.
	//CODE:


		//We set the the parameters a and b to first and second effectively initializing the variables
		//which will be used in template definition below.

		//Assign first to a and second to b.
			//CODE:


	//This is the function prototype. It just lets the computer know that there is a function that
	//will be defined later. This member function stores  the outcome of that function and when
	//called will execute and return the value to main.

  //Declare a function prototype bigger() of data type T.
  //CODE:


	//Below is the function template class definition. Hint. Its just like a class again. template keyword<> no comma 

	//Define the function template of class T.
	//CODE:
	

//This is the proper syntax necessary for the function. It states:
// "T" (return type) ->  in the "Adam" class -> using <T> (template) -> :: (access and run) -> member 
//function "bigger() and return answer to the function to the caller (here main)"

//Define the function bigger() of template class Adam and return type T.
//CODE:


	//This is what is returned to main (caller) and replaces "bigger()" 
	//Just says if first is larger than second return first. If not (else) return second (ternary operator)

//Use the ternary operator to return whether first is greater than second then return first else return second.
	//CODE:


int main() {

	//Here we are creating an object from the Adam class. We notify the computer with <  > that we are
	//dealing with a double. ato = object

	//Instantiate a double object ato of the Adam class with arguments 3.14 and 6.28.
	//CODE:


	//ato(object) .(+) bigger() gives us the output in the desired data type. So 6.28 (includes decimal)

	//Add cout statement to call the bigger() function on the ato object and show the result to the screen.
	//CODE:


	//object of the Adam class. Notifies computer with <  > that we are dealing with an int. ato2=object

	//Instantiate a integer object ato2 of the Adam class with arguments 22.3 and 7.
	//CODE:


	//ato2(object .(+) bigger gives us the output in the desired data type. So 22 (no decimal - truncated)

	//Add cout statement to call the bigger() function on the ato2 object and show the result to the screen.
	//CODE:

}