#include<iostream>
#include "Claudia.h"
using namespace std;


//This is the constructor definition. The flow is Claudia(class) "::" scope(look in class for -> function -> Claudia(parameter)
//The object "cv" passes in its argument which is (23). That is passed into the parameter here which is then initialized below
//in the member initializer list. //This sets the "num" from main() to a member variable "m_c"

//Define the default blank constructor Claudia of the Claudia class with an integer parameter with num variable. 
//Then using a member initializer list to initialize that parameter to a member variable m_num.
//CODE:
Claudia::Claudia(int num)
: m_num(num) {

}

//The class Claudia ::(contains) a function printToScreen(no parameters) with no parameters

//Define a void function printToScreen with no parameters of the Claudia class that prints three cout statements to the screen
//On printing normally, one using the "this" keyword and arrow member selection operator with the member variable storing number
//from main, and lastly using a dereferenced pointer with this keyword and the dot "." operator to access the member 
//variable m_num from that dereference object.
//CODE:
void Claudia::printToScreen(){

	//The traditional way to display a function to the screen by simply using the member variable "m_c" directly.
	
	//Add a cout statement to print cv to screen normally.
	//CODE:
	cout << "cv = " << m_num << endl;

	//Here we use the this keyword with the arrow member selection operator "->" to point to place in memory were m_c is stored.
	//**Remember the key to this function is that we declared the Claudia class above and so because the function printToScreen()
	//is a member of the Claudia class it has access to its private functions.

	//Add cout statement using this keyword and arrow member selection operator to access an point print m_num private variable 
	//of object cv to the screen to the screen.
	//CODE:
	cout << "this-> = " << this->m_num << endl;

	//Here we use a pointer  "*" with "this" in parameters () with a "." separator to show what is stored in the private 
	//storage variable m_c. The flow here is (parameter - "do this" "." to m_c

	//Use a dereferenced pointer an this keyword and member access operator (.) dot operator to access members of the object cv.
	//CODE:
	cout << "(*this).m_num =" << (*this).m_num << endl;
}