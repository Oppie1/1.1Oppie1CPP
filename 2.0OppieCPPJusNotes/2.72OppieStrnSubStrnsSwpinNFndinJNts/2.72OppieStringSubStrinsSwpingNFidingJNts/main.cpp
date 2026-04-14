#include <iostream>
#include <string>//We need the string header to access the library of functions for strings.
using namespace std;

//This tutorial goes over some string functions that can be helpful n finding, swapping and taking a
//substring from a sentence.

int main() {

	//Instantiate the s1 object of the string class with a string parameter  "I am the parameter for the s1 variable/object"
	//CODE:
	

	cout << "I am the parameter for the s1 variable/object." << endl;
	cout << "What index number is 'am' in the word parameter in the sentence?" << endl;
	//There are two occurrences of "am" in the sentence. When using the find() function it starts from
	//the left and goes to the right until it finds the first "am" and then displays the index value of 
	//the first character to the screen. Which is index value of 2.
	cout << "Using find() function:" << endl;

	//Add a cout statement an call the find(); function with "am" as its argument on the s1 object. Then add two new lines.
	//CODE:
	

	//In the instance of using the "r" find -> rfind() function it starts from the right looking for the
	//first instance of "am" from that direction. The index value of "am" from the right is 12.
	cout << "\nUsing rfind() function:" << endl;

	//Add a cout statement with and call the rfind() function on the s1 object with "am" as the parameter.
	//CODE:
	

	cout << "\nThis is an example of swapping (swap() function) one sentence with another." << endl;

	//Here we have a variable/object with a string as its parameter. This is a constructor that's 
	//purpose is to print the sentence to the screen when called.

	//Instantiate an object named one of the string class with a string as the argument. It should say: "This is a variable/object
	//sentence/string that will be swapped with string/sentence two"
	//CODE:
	

	//This is the sentence that we will be swapping positions with.
	
	//Instantiate an object named two of the string class with the argument "This is the variable/object that will be swapped
	//(string/sentence one)
	//CODE:
	

		//Add a cout statement that displays sentence one and two (objects) on different lines.
		//CODE:
	

	//This is the swap function (located in the string library) that we can use to perform the swap gracefully.
	//Call the swap() function on the one object with object two as the argument.
	//CODE:
		

	//Add a cout statement to print sentences one and two (also objects) to the screen.
	//CODE:
		

	cout << "\nThis is an example of taking a sentence and pulling part of sentence out (sub string)" << endl;
	cout << "This sentence will be used to pull out substring from it.\n" << endl;

	//In this example we are are going to start at the 0 index of the sentence and count right 14 spaces
	//Then we pull out the character at that location (w) and count 12 positions to the right. We take
	//that piece of the sentence/string and display it to the screen.

	//Instantiate an object named s2 of the string class with the argument of "This sentence will be used to pull out substring from it.
	//CODE:


	//Add a cout statement and call the substr() functions with parameters 14 and 12 on the s2 object
	//CODE:


}