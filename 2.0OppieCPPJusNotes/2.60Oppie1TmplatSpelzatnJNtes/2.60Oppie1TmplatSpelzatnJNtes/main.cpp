#include<iostream>
using namespace std;


//In template specialization it is just like it sound. They are special template function data types that programmers
//can use to act/run on an object that has a special/specific case. Like whether the return to a calls arguments should
//be a character or not. Here we use two templates of the Adam class and each will execute under certain circumstances. 

//Here we create a template with data type "T" that will operate on the Adam class.
//T is basically a placeholder for the data type.

//Declare a template for class T
//CODE:


//Here we create an Adam class without declaring any parameters for ALL its members

//Declare an Adam class
//CODE:


	//Declare a public access specifier.
	//CODE:


	//This creates a constructor with a parameter of data type "T" for variable "x".
	//This will be used for anything other than a character. It is our "generic" constructor.
	//The "x" here is just a placeholder for the argument's value in main

//Declare an Adam constructor with template type T and variable x as a parameter that prints x "is not a character" to screen/
//CODE:
	

	//This is the syntax for the next class template. It can be left blank. Without template parameters it just
	//uses the template<class T> we established in the first template above. Again, T is just a placeholder for data
	//type later.

//Declare an empty template <> -> which declares a full template specialization with empty angle brackets<>
//CODE:


//This is where we "tell" the Adam class which data type to look for when call from main is executed.
//We are creating a placeholder for that call of "char" if main call and argument is "char" this says "use ME"

//Declare a class Adam with "char" template parameter. Declare the Adam class specialized for "char", overriding the generic template
//when a char argument is passed.
//CODE:


	//Declare a public access specifier.
	//CODE:


	//This establishes a constructor with the parameter of a char data type. Again the "x" here is just a placeholder.
	
	//Declare a Adam constructor with char data type and variable x as parameter that prints "x is indeed a character" to screen.
	//CODE:


int main() {

	//template parameter of "int"<> lets compiler know to expect an integer (here 7). Without template parameter program not work.
		//This will by default NOT use template class with "char" and will use blank case.

	//Instantiate object ato of the Adam class with int template parameter, passing 7 as the argument
	//CODE:


	//template parameter of "double"<> lets compiler know to expect a decimal value. The object "calls" to class outside of main()
	//and uses the default constructor in the blank class template.

	//Instantiate object ato2 of the Adam class with double template parameter, passing 3.1415 as the argument.
	//CODE:


	//Finally this template parameter "char"<> lets compiler know to use the class/template and function definition with char parameter.

	//Instantiate object ato3 of the Adam class with char template parameter, passing in 'q' as the argument.
	//CODE:
	

}