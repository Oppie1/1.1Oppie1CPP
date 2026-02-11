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
	int sally[2][3] = { {2, 3, 4}, {8,9,10} };

	cout << "Here we aim find location of elements in a multi-dimensional array named sally. The Array has 6 elements two rows" << endl;
	cout<<"and 3 columns(2x3) - Sally[0][1] is:" << endl;

	//Remember that computers start counting index at "0" so the following sally[0][1] is [first bracket] [column 2]. 3 is the element
	//at that index location
	cout << sally[0][1]<<"\n"<<endl;

	//The following [1][1] is [second bracket] [column 2]. 9 is the element at that index location
	cout << "If it were sally[1][1] which is at index 0 in the first row and 1 in second column is:" << endl;
	cout << sally[1][1] << "\n" << endl;

	//The he following sally[0][0] is [first bracket][first column]. 2 is the element at that index location
	cout << "If it were sally[0][0] which is at index 0 in the first row and 1 in second column is:" << endl;
	cout << sally[0][0] << "\n" << endl;

}