#include <iostream>
#include "Mother.h"
#include "Son.h"
using namespace std;


int main() {

	//Creates an object (here nakai) of the "Son" class.

	cout << "The Son is asked what their last name is and responds: " << endl;
	Son nakai;
	//Now we take that object and call a function on it. Object is like an empty box and 
	//sayOurLastName is a tool.  This tool/function is able to be called by a Son object
	//because Son class is a derived class and mother is the base class.
	//A Son (derived class) object can inherit from the Mother class but the Mother (base class) cannot 
	//inherit from Son class
	nakai.sayOurLastName();

}