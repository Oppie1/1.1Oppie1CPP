#include<iostream>
#include "Claudia.h"
using namespace std;


//This is the constructor definition. The flow is Claudia(class) "::" scope(look in class for -> funcion -> Claudia(parameter)
//The object "cv" passes in its argument which is (23). That is passed into the parameter here which is then initialized below
//in the member initializer list.
Claudia::Claudia(int num)
	:m_c(num)//This sets the "num" from main() to a member variable "m_c"
{

}

//The class Claudia ::(contains) a function printToScreen(no parameters) with no parameters
void Claudia::printToScreen() {
	//The traditional way to display a function to the screen by simply using the member variable "m_c" directly.
	cout << "h= " << m_c << endl;
	//Here we use the this keyword with the arrow member selection operator "->" to point to place in memory were m_c is stored.
	//**Remember the key to this function is that we declared the Claudia class above and so because the function printToScreen()
	//is a member of the Claudia class it has access to its private functions.
	cout << "this-> " << this->m_c << endl;
	//Here we use a pointer  "*" with "this" in parameters (   ) with a "." separator to show what is stored in the private 
	//storage variable m_c. The flow here is (parameter - "do this" "." to m_c
	cout << "(*this).m_c= " << (*this).m_c << endl;
}