#include <iostream>
#include "Mother.h"
#include "Son.h"
using namespace std;


int main() {

	//These are initialized variables set to values that can be access anywhere in the program.
	int nakaiAge = 3;
	int claudiaAge = 19;

	//Here we create a Son object(empty box) Nakai
	Son nakai;
	//Here we are saying "hey nakai" say your name. And the he rushes to the mother class and runs that function to say his name.
	//Kind of like he needed to learn how to do that from his mother at first.
	nakai.sayName(); 

	//This is two ways to see Nakai's age out to screen. One from within main and the other in another file (top of mother class)
	//Remember Nakai has access to the mother variables too.
	cout << "Nakai! And he is " << nakaiAge << " years old." << endl;
	cout << "Nakai2 is " << nakai.age << " years old.\n" << endl;
	
	//Here we create a Mother object. An empty box with Claudia's name on it.
	Mother claudia;
	//This says use claudia class and then go to same name function -> run it -> then return control to main.
	claudia.sayName();
	cout << "Claudia! And she is " << claudiaAge << " years old." << endl;
	//Here we go outside of main() right into the mother class and grab the variable at top of mother class page and return it here
	cout << "Claudia is " << claudia.age2 << " years old.\n" << endl;
	
}