#pragma once


//When an object is created in main it has access to this header class. It is like a set of methods
//and variables that main can call on. The only part that runs automatically when that object is created
//are constructors, which this program demonstrates.

class AdamClass
{
public:

	AdamClass();//This is a constructor and runs automatically when called from main. We know this 
	//because this method has the same name as the class "AdamClass"
	//This then calls the function/method in the .cpp file to run whatever that action is. In this
	//case it's to run a cout statement to the screen.
};

