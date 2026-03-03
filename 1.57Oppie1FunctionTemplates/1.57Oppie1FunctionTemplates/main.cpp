#include <iostream>
using namespace std;


//In function templates we make a template of of a class makes it so we can use different
//data types in the same function. This is helpful in that we don't have to make multiple
//functions for different data.

//Here we make a template of the Adam class.
template<class Adam>

//Here we declare the data type of type "Adam" (class).
//The parameters of prototype acts as place holders for the arguments in main.
//Here, it can hold data from both int and double.
Adam addTogether(Adam a, Adam b) {
	//This function returns the sum of those two values back to main.
	return a + b;
}

int main() {
	//Here we use a double in the function template
	double x = 7.65, y = 43.54, z;
	//Note: d is declared as int but assigned 3.14 - the decimal is trucated t0 3. Both c
	//and d are ints, so the template uses the int version of addTogether.
	int c = 3, d = 3.14, e;
	//Then we add to integers together
	int f = 6, g = 7, h;

	//So each one of these variables in the arguments sub in for a and b in the function
	//prototype/definition.
	z = addTogether(x, y);
	e = addTogether(c, d);
	f = addTogether(f, g);

	cout << "Here we add two doubles together using template\n\n";
	cout << z << endl;
	cout << "-----------------------------------------\n";
	cout << "Adding two ints(note:3.14 was truncated to 3 at declaration(int), so the \n";
	cout << "the template resolves to the int version):\n";
	cout << e << endl;
	cout << "--------------------------------------------------------\n";
	cout << "Here we add two whole numbers/int together and it uses the template in the same\n";
	cout << "way as when we add two doubles (decimals together):\n" << endl;
	cout << f << endl;

}