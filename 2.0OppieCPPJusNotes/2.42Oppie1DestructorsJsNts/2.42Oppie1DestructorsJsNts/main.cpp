#include <iostream>
#include "Claudia.h"
using namespace std;

//This tutorial is on destructors which run at the end of a program automatically as objects are destroyed

int main() {

	//Here we create a object of the (from the) Claudia class -> Class: Claudia Object: cv. When this object is created the
	//constructor runs from the .cpp file. It works like a call but is automatic as the object is being built from a class
	//blueprint/header which operates functions outside the the main program here.

	//Declare an object cv of the Claudia class.
	//CODE:


	//When object is created the constructor (cout statement in .cpp) runs in place of this code. It is the constructor call.
	//We print the following in main to show location of where the functions run when object is created in main.

	//Make cout statement here in main that say it runs after the constructor but before the destructor but is in main()
	//CODE:


	//The destructor (cout statement in .cpp)  will auto run after this this statement in main as objects are destroyed.

}
//Complete description" We are declaring an object named cv of the Claudia class, which instantiates it and triggers the constructor.