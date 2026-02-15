#include <iostream>
using namespace std;


//In this lesson we will cover the size of keyword which is something programmers can use when they want to know
//the size of the array in bytes or how many elements are in a given array. 

int main() {

	//This initializes a adam array with 10 elements
	double adam[10];

	cout << "Using the sizeof key word with parameter (adam) -> this is parameter so computer knows info we want to access\n";
	cout << "So the the size of the adam array is:\n";
	//The key word is a function in the iostream library that lets us access the desired bytes information we are looking for.
	cout << sizeof(adam) << " bytes"<< endl;

	cout << "\nThe following we divide the total sizeof (like we did above) and one element of the adam array to get the total\n";
	cout << "number of elements in the adam array which is:\n";
	cout << sizeof(adam) / sizeof(adam[0]) << endl;
	//This can be handy when you don't know how many elements are in a particular array
}