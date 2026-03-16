#include <iostream>
#include <string>//This header is needed to access the library that contains the string functions.
using namespace std;


//In this tutorial we wil be using string functions to operate on the same sentence. 
//We will use the replace(); and insert(); functions

int main() {

	//We start by creating a string object (s1) with a string parameter. This is a constructor so when it
	//is called it is created and initialized at same time.
	string s1("Hello my name is Adam and I completed TNB series more times than I can count...");
	
	//Print the s1 object to the screen. Again, its parameter is what is in the object. So you have
	//an object AND that object has a sentence on/in it.
	cout << s1 << "\n" << endl;

	//Now we take that sentence and use the replace function to take out "Adam" and put Kanopi Oppie in
	//its place. We start at the left/0 index and count 17 element to the right. That index location contains
	// A as its value we then count 4 elements to the right, this is what is being replaced. So we take 
	// Adam out and replace it with Kanopi Oppie. The substring being replaced does NOT need to have the 
	//same number of elements as the substring that replaces it. Adam has 4 elements. Kanopi has 12.
	//the s1.replace function contains 3 parameters. 1. How many elements to count 2. followed by how many
	//elements of the substring we are replacing 3. And what to replace those elements/characters with.
	s1.replace(17, 4, "Kanopi Oppie");
	cout << s1 << "\n" << endl;

	//Here we take that modified senetence and again start out at index 0 and count 16 elements to the right
	//Then we call the insert() fuction on the s1 object. It contains two parameters. 1. Number of elements
	// to count. 2. What to insert into the string at index location 16.
	s1.insert(16, " Developer");
	cout << s1 <<"\n" << endl;

	//Here is just another example of the the replace function to demonstrate that we start at the index
	//location of 0 when modifiy since computers start counting at 0 not 1 like humans.
	s1.replace(0, 5, "Adam,");
	cout << s1 << endl;
}