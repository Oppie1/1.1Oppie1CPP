#include<iostream>
#include <vector>
using namespace std;


//Vectors are dynamic arrays in that they don't have to be a fixed/static number of elements. 

int main() {

	//Even when you declare a size you can still manipulate (add, take, insert, erase,ect.) it.
	//Here we create an empty vector while specifying the size here. Here the size is 5 elements.
	vector<int> emptyVector(5);


	//Here we have 5 vector arrays. A key point: We can operate on the same array multiple times manipulating it with different
	//functions and actions the will effect how many elements it has. It's size is dynamic. Can adjust number of elements/indexs 
	vector<int> happyVector = { 1,2,3 };
	vector<int> happyVector2 = { 7,8,9 };
	//We do not use this array. Feel free to try to change the push_back() example to this vector (happyVector3). To see what happens.
	vector<int> happyVector3 = { 11,12,13 };
	vector<int> happyVector4 = { 14,15,16 };
	vector<int> happyVector5 = { 21,22,23 };

	cout << "Print full happyVector array to screen: " << endl;

	//Here we create an int variable and set it to happy vector with a size of 2 (3 elements total)
	int vectorElem = happyVector[ 2 ];

	//Create a for loop to scroll through the whole vector iterating over each element in the array. There will be 3 total
	//iterations the first will print out 1 to screen, second iteration will print out 2 and the third iteration will print out 3
	for (int i = 0; i < happyVector.size(); i++) {
		//This access the happyVector "i" is just an index location placeholder as well as the element/value which will print to screen.
		cout << happyVector[i] << "\n";
	}

	cout << "Print with replacement value" << endl;
	
	//Replace an element/value by setting the index location you want to change to a new value. Here 6.
	happyVector2[0] = 6;
	
	//Again, this is a loop to scroll through the whole vector iterating over each element in the array.
//The first iteration from happyVector2 array will be overwritten by "6" so instead of "7" printing out in first position it will be 6
	for (int i = 0; i < happyVector2.size(); i++) {
		
		//So again when you see "i" it is just saying the index location which is assigned to a value.
		cout << happyVector2[i] << "\n";
	}

	cout << "Print with push_back() function" << endl;

	//This demonstrates two things. First we use the push_back() to add a value/index location to the array we are dealing with.
	//Secondly this shows that we can operate/manipulate the same vector (here happyVector2) however we wish. We dont need 
	//a "new" vector. That said it is operating AFTER the above manipulation. So it is NOT the exactly the original.
	happyVector2.push_back(10);
	
	//So again we start at 0 in first iteration and so long as i (index location) is less that the size of the happyVector2 array
	//which is 2 (3 index locations - 0,1,2) the for loop will keep running. Because we used the push_back() another element
//is placed at the end when the for loop finishes its execution. The push_back() is in addition too NOT another iteration of the for loop.
	for (int i = 0; i < happyVector2.size(); i++) {

		cout << happyVector2[i] << "\n";
	}

	cout << "Print with pop_back() function" << endl;
	
	//The pop back works in a similar fashion but the difference is that it automatically eliminates the last element in the given array.
	//Once again the pop_back function takes place before the for loop even runs and eliminates the value at the last location of vector.
	happyVector4.pop_back();

	for (int i = 0; i < happyVector4.size(); i++) {

		cout << happyVector4[i] << "\n";
	}

	
	cout << "Print with erase function" << endl;
	//The erase function allows programmer to eliminate a index location and therefore the value/element at that index location prior
	//to the for loop running. So here we eliminate the 2nd position in the array (22)
	happyVector5.erase(happyVector5.begin()+1);

	for (int i = 0; i < happyVector5.size(); i++) {

		cout << happyVector5[i] << "\n";
	}

	cout << "Print with insert function" << endl;
	
//Again, this demonstrates 2 things. First it shows we can operate on the same array twice (although with new structure/elements/values)
//Secondly, the insert() alows us to insert a value into the current vector. So here we start at the begining() which is at the 0
	//position and add 1 (move one space over in index) and put the number 33 in that location.
	happyVector5.insert(happyVector5.begin() + 1, 33);

	for (int i = 0; i < happyVector5.size(); i++) {

		cout << happyVector5[i] << "\n";
	}

	cout << "Or using the range based loop method. " << endl;

	//This for loop just takes the a variable (int here) and sets it equal to the entire vector ":" basically saying "go to"
	//the happy vector variable.
	for (int curElm : happyVector) {
		cout << curElm << endl;
	}

}