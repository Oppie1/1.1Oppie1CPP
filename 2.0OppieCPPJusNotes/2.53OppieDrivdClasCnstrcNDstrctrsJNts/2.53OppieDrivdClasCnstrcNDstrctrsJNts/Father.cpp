#include<iostream>
#include "Son.h"
#include "Father.h"
using namespace std;


//Create two functions (constructor and destructor) of the Father class that will run when the Son objects are created. 
//And if a father object is created of course.

	//This is the Father Constructor it runs when a Son object is created even BEFORE any of the Son members (variables and functions).
	//The flow here is Father(class) -> :: (look in) -> Father(function)

//Define the Father constructor with no parameters of the Father class with a cout statement in body notifying that it runs first
//even when a Son object is created because Son a derived class of Father which is the base class. It is first to run.
//CODE:


//This is the Father destructor. It runs when objects (both Son and Father) are being destroyed. It runs AFTER the Son objects
//are through executing their members functions/variables as program ends.

//Define the destructor with no parameters of the Father class. Then have a cout statement in the body that states the father destructor 
//runs after the Son. It is the last to run.
//CODE:

