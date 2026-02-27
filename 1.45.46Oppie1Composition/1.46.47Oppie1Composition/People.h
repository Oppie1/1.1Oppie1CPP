#pragma once
#include <string>//We use this library when making strings
#include "Birthday.h"//The people header file needs to be connected to the Birthday header file since
//the People class
using namespace std;

//This is the People class and acts like a blueprint for the .cpp file. Remember, sometimes it helps
//to copy and paste this to the .cpp file that correlates with the .h file here (which is People.cpp)
//This provides a nice outline that can be filled in with the proper syntax for the corresponding info.
class People
{

public:
	//This is a constructor that carries two parameters and is automatically run when an object is created
	//It sees in the name and the birthday which will be initialized in the member initializer list in .cpp
	People(string name, Birthday dateOfBirthObj);
	//This is a standard function that is in .cpp file that will print the full sentence to screen
	//and use information gained in BOTH the People.cpp file and the Birthday.cpp file.
	void printInfo();

private:
	//When the .cpp file runs and the member initializer initializes the variables the data is stored
	//here in private storage. Which can only be accessed from within members of the People class.
	//We use "m_" to distinguish these variables as "members".
	string m_name;
	Birthday m_dateOfBirthObj;

};

