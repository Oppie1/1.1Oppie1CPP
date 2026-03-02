#include<iostream>
#include "Son.h"
#include "Father.h"
using namespace std;


//Create two functions (constructor and destructor) of the Father class that will run when the Son objects are created. 
//And if a father object is created of course.

	//This is the Father Construcor it runs when a Son object is created even BEFORE any of the Son members (variables and functions).
	//The flow here is Father(class) -> :: (look in) -> Father(function)
	Father::Father() {

		cout << "I am the Father constructor. As you can see I run before the Son as a good father does." << endl;
	}

	//This is the Father destructor. It runs when objects (both Son and Father) are being destroyed. It runs AFTER the Son objects
	//are through executing thier members functions/variables as program ends.
	Father::~Father() {
		
		cout << "I am the Father destructor. I run after (wait for) the Son to finish running as a good father also does." << endl;
	}


