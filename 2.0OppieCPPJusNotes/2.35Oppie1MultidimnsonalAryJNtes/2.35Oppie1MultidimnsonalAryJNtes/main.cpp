#include <iostream>
using namespace std;

//In this tutorial we will be finding elements at index locations ONE multi-dimensional array.
//So in the following we have one array with two rows and three columns (NOT two arrays)

int main() {

	//The first number in brackets [2] is referring to the the number of rows/sets of numbers within the brackets. There are
	//two sets of brackets each representing: {fist row} {second row}. The [3] refers to how many columns in each set of brackets 
	//which is determined by how many numbers are within EACH bracket so 3 columns.
	//each set/row and so here there are 3 columns. So when locating elements using the indices as in this tutorial just remember:
	// ->[set/row #][column #]

	//Create/declare a multi dimensional sally array with 2 rows and 3 columns with numbers 2,3,4 and 8,9,10
	//CODE:
	int sally[2][3] = { { 2,3,4 }, { 8,9,10 } };

	cout << "Here we aim find location of elements in a multi-dimensional array named sally. The Array has 6 elements " << endl;
	cout << "two rows and 3 columns(2x3). { { 2,3,4 }, { 8,9,10 } }" << endl;

	
	cout << "\nIf it were sally array location @ index 0,1 it would be: " << endl;
	//Create a cout statement that displays INDEX location the array at row 0 and column 1.
	//CODE:
	cout << sally[0][1] << endl;

	//The following [1][1] is [second bracket] [column 2]. 9 is the element at that index location
	cout << "\nIf it were sally location @ index 1,1 it would be: " << endl;
	//Create a cout statement that display the location of the statement above.
	//CODE:
	cout << sally[1][1] << endl;

	//The the following sally[1][2] is [first bracket][first column]. 2 is the element at that index location
	cout << "\nIf it were sally array at index location 1, 2 it would be: " << endl;
	//Create a cout statement that represents the statement above.
	//CODE:
	cout << sally[1][2] << endl;

	cout << "\nIf it were sally location @ index 0,0 it would be : " << endl;

	//Create a cout statement that display the location of the statement above.
	//CODE:
	cout << sally[0][0] << endl;

}