#include <iostream>
#include "Claudia.h"
using namespace std;

//This tutorial is on destructors which run at the end of a program automatically as objects are destroyed

int main() {

	//Here we create a object of the (from the) Claudia class -> Class: Claudia Object: cv. When this object is created the
	//constructor runs from the .cpp file. It works like a call but is automatic as the object is being built from a class
	//blueprint/header which operates functions outside the the main program here.
	Claudia cv;//When object is created the constructor (cout statement in .cpp) runs in place of this code. It is the constructor call.
	//We print the following in main to show location of where the functions run when object is created in main.
	cout << "This cout statement is in main and runs before the constructor." << endl;
	//The destructor (cout statement in .cpp)  will auto run after this this statement in main as objects are destroyed.

}