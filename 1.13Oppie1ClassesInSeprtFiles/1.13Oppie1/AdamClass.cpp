#include <iostream>
#include "AdamClass.h"
using namespace std;

//This is where constructors and methods in the header file are defined. Think of the header file like
//a table of contents with different chapters. This would be the chapter itself with all the 
//equations demonstrated. Or perhaps if you like history, historical facts and dates/events, 
//biology/chemistry could plus their name and location or chemical compounds and then their structure.

AdamClass::AdamClass() {

	cout << "I am a constructor and am being printed to screen when object in main is created.\n";
	cout << "Library/book example(You are intern and asked to create electronic form for people\n";
	cout << "to check out books:\n";
	cout << "------------------------------Library Form------------------------------------------\n";
	cout << "Please fill in your address________ and your name_________ to check out this book\n";
	cout << "And your signature here:_________\n";

	cout << "Thank you!" << endl;

	cout << "-----------------End of Library Checkout Agreement------------------------------" << endl;

}

//More definitoins from the header file outline could/would come next e.g.

//AdamClass::NextMethod/function() -> Just a note we will learn this in a later lesson.
//Again, this is where we take the outline/table of contents/blueprint ect.and show what happens
//in each instance.


