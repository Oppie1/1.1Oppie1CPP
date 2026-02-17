#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

//
//In this tutorial we will cover composition. We will be linking files through headers and their
//associated .cpp files.
// 
// First: Composition is a fundamental concept in object-oriented programing that involves building
// complex objects from simpler ones. This approach models a "has-a" relationship between objects,
// where a complex object (the whole or parent) contains simpler objects (the parts or children). 
// For example, a car has an engine, a transmission, and tires.
// 
// Key Principles of Composition
// 1.Part-Whole Relationship: In composition, the part is an integral part of whole object. For instance,
// a heart is part of a person's body.
// 2. Lifetime Management: The lifetime of the part is managed by the whole object. When the whole
// object is created, the part is created, and when the whole object is destroyed, the part is destroyed.
// 3.Unidirectional relationship: The part does not know about th existence of the whole object.
// For example, a heart operates without knowing it is part of the body.
//

int main() {

	//We create dateOfBirthObj of the Birthday class -> Birthday(class) dateOfBirthObj(object) with 
	//argument(11,01,1981). These arguments fit into the parameters of prototype in header then to .cpp file.
	Birthday dateOfBirthObj(11, 01, 1981);

	//We now make an claudiaVilla object of the People class. Arguments here will be a string (sentence)
	//and then we use the dataOfBirthObject from above to populate the rest of the argument. So what
	//happens is the object above executes from the Birthday.h and Birthday.cpp file and we use that
	//information to fill in the arguments/(parameters in .h/.cpp file which in turn allow us to 
	//use the printInfo() function below.
	People claudiaVilla("Claudia", dateOfBirthObj);
	//The print info function will use all this information together to print out the totality of 
	//this information to the .cpp file. Because the print info function is a void main is just 
	//calling to that function which prints to screen and then returns control to main.
	claudiaVilla.printInfo();

}