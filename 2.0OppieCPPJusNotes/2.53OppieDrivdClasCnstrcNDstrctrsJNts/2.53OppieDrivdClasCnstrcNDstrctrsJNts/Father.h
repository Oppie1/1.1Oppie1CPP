#pragma once


//Create a class which acts as a blueprint for objects created from the Father class.
//Programmers often will create this outline and copy and paste it into the .cpp file that
//is responsible to define these constructors/functions

//Declare a base class named Father
//CODE:


//Declare a public access specifier
//CODE:


	//This is the Father constructor. In inheritance it runs every time a Father OR Son object is created due to inheritance.
	//Here Father is the base class and Son is the derived class. So this is even run before members of the Son class run.

	//Declare a constructor declaration named Father.
	//CODE:
	

	//This is the Father destructor represented with a ~ (tilde) in front of father to notify the computer that this
	//function is a destructor. It runs at the end of the program as the objects are destroyed. It runs LAST after the
	//members of the Son class fully run. This is runs and then the program ends.
	
	//Declare a destructor named Father
	//CODE:
