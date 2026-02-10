#include <iostream>
using namespace std;


//This tutorial explains how we use arrays and shows how to pick a number from the array

int main() {

	//As part of initializing array along with data type we need to let computer know how many numbers (called elements when talking
	//about an array) we are referring to. Here we have a list of 5 numbers.
	//For computers arrays start at index 0. And so here the array is 0 - 4 numbers (5 numbers in total) 
	// so 61 is at 0 index, 71 is at 1 index, 3 is at 2, 43 is at 3 and 91 is at the fourth position in the array
	int adamNumbers[5] = { 61, 71, 3, 43, 91 };//Again, these are Array initializer list "elements"

	//Below are examples on how to pull numbers out of array and show them to the screen. Here we do that by printing (cout)
	//the index location of given values.

	cout << "\nBelow are 3 index locations of values in an array:\n" << endl;
	//At index location 4 we will have the number 91.
	cout <<"At index location 4 the number is:"<< adamNumbers[4] << endl;
	//At index location 1 we will have the number 71
	cout <<"At index location 1 the number is:"<< adamNumbers[1] << endl;
	//At index location 0 we will have the number 61
	cout <<"At index location 0 the number is:" << adamNumbers[0] << endl;
}


