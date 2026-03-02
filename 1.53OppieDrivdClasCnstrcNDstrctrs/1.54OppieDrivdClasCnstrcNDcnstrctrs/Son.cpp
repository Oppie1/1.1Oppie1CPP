#include<iostream>
#include "Son.h"
#include "Father.h"
using namespace std;




	//This runs automatically when the Son object is created (after father constructor).
	//The flow is Son(class) -> ::(look in) -> Son(function)
	Son::Son() {

		cout << "I am the Son constructor! I run after the Father constructor but BEFORE both destructors!\n" << endl;

}
	//This runs last but before the Father destructor.
	//The flow here is Son(class) -> :: (look in) -> Son(function)
	Son::~Son(){
		cout << "I am the Son destructor! I run BEFORE the Father destructor." << endl;
}
