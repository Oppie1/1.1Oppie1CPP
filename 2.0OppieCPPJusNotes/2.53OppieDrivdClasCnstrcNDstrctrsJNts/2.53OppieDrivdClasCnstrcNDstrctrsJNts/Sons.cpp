#include<iostream>
#include "Son.h"
#include "Father.h"
using namespace std;




//This runs automatically when the Son object is created (after father constructor).
//The flow is Son(class) -> ::(look in) -> Son(function)

//Declare a Son constructor with no parameters of the Son class. Add a cout statement that it is the Son constructor and that
//It runs AFTER the father constructor but before the father destructor.
//CODE:


//This runs last but before the Father destructor.
//The flow here is Son(class) -> :: (look in) -> Son(function)

//Declare a Son destructor with no parameters of the Son class. Make cout statement that it runs before the father destructor
//CODE:
