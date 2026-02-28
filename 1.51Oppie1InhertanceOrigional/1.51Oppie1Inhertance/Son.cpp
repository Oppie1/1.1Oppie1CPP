#include <iostream>
#include "Mother.h"
#include "Son.h"
using namespace std;


Son::Son() {
	//This is a construcor that can be built on. So when we create an object in main this
	//constructs an object for other functions to build on/in. So as the derived class
	//Son can call on Mothers functions but those functions are run on the object created here.
}