#pragma once
#include "Father.h"//This is needed to tether the Son class to the Father.




//Create a derived class of the Father. Here the Son is the derived class and the Father is the base. When a Son object is 
//created the father constructor runs automatically before the rest of the Son class executes.

//Programmers often copy and paste the class into the .cpp file as a guide and then define the functions/variable members accordingly.
class Son : public Father

{
public:
	//This runs automatically when the Son object is created (after father constructor).
	Son();
	//This runs last but before the Father destructor.
	~Son();
};
