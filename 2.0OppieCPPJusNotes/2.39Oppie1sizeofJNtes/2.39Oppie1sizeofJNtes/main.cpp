#include <iostream>
using namespace std;


//In this lesson we will cover the sizeof  function keyword which is something programmers can use when they want to know
//the size of the array in bytes or how many elements are in a given array. 

int main() {

	//This initializes a adam array with 10 elements
	//Declare a double array named adam and initialize it to 10 elements
	//CODE:
	double adam[10];

	cout << "One element of the adam array as a double is: " << endl;
	//Make a cout statement that shows the size of one element of the adam array
	//CODE:
	


	cout << "\nUsing the sizeof keyword with parameter (adam) -> this is parameter so computer knows info we want to access\n";
	cout << "So the the size of the adam array is:\n";
	//The sizeof(parameter) keyword is a function in the iostream library that lets us access the desired bytes information we are looking for.
	//Make a cout statement that shows the size of adam array in total bytes.
	//CODE:
	

	cout << "\nThe following we divide the total sizeof (like we did above) and one element of the adam array to get the total\n";
	cout << "number of elements in the adam array which is:\n";

	//Add a cout statement that displays the size of the adam array to the screen (sizeof()) in total bytes - sizeof function with parameter adam.
	//divided by one element (in bytes) of the adam array.
	//CODE:
	

	//This can be handy when you don't know how many elements are in a particular array
}