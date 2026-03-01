#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;

//This is a function that will run the to initialize the object created by the Son. The
//Values will actually be stored in the Father's private member variables.
void Son::protectedDemo() {

	publicV = 1;
	protectedV = 2;

	//*If private were not commented out (below) this program would fail* 
	//privateV = 3;

	//This just prints the information from the demo to the screen (except private of course)
	cout << "The public variable is: " << publicV << "\n"<< endl;
	cout << "The protected variable is: " << protectedV << "\n" << endl;

	//This would not work as it trys to access private information from Father Class.
	//cout << "The public variable is: " << privateV << "\n;" << endl;
}