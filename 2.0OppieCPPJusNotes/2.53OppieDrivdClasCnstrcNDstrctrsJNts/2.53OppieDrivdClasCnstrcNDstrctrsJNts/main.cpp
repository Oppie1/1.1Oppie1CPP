#include<iostream>
#include "Son.h"
#include "Father.h"
using namespace std;

//In this tutorial we well demonstrate constructors and destructors when a derived class object is created.
//The base class constructor always runs before the derived class constructor. The base class destructor always 
//runs after the Son destructor and is the last thing to run in the program.

int main() {

	//Opening sentence to show when program in main begins. It is before the Son object is created.
	cout << "I am a cout statement that is the first thing in 'main'\n" << endl;

	//Here we create the Son object. Even though the Father class is not specifically called/object created in main I automatically
	//runs because it is the base class of the Son. The Son object "builds" on top of the father.
	//Instantiate a class named nakai of the Son class.
	//CODE:
	

	//These two cout statements show location of content written in program. In main() code it comes after the object Nakai. BUT
	//when run the destructors of Father and Son run after this.
	cout << "In main I am the last bit of code that was written. HOWEVER, I run in between the constructor and destructors" << endl;
	cout << "of BOTH Son And Father. When you have destructors they are always the LAST thing to run then program ends.\n" << endl;

}