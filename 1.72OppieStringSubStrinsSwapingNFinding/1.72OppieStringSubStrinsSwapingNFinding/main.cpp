#include <iostream>
#include <string>//We need the string header to access the library of functions for strings.
using namespace std;

//This tutorial goes over some string functions that can be helpful n finding, swapping and taking a
//substring from a sentence.

int main() {

	string s1("I am the parameter for the s1 variable/object");

	cout << "I am the parameter for the s1 variable/object." << endl;
	cout<<"What index number is 'am' in the word parameter in the sentence?" << endl;
	//There are two occurrences of "am" in the sentnece. When using the find() function it starts from
	//the left and goes to the right until it finds the first "am" and then displays the index value of 
	//the first character to the screen. Which is index value of 2.
	cout << "Using find() function:" << endl;
	cout << s1.find("am") << "\n" << endl;

	//In the instance of using the "r" find -> rfind() function it starts from the right looking for the
	//first instance of "am" from that direction. The index value of "am" from the right is 12.
	cout << "Using rfind() function:" << endl;
	cout << s1.rfind("am") << "\n" << endl;



	cout << "This is an example of swapping (swap() function) one sentence with another." << endl;

	//Here we have a variable/object with a string as its parameter. This is a constructor that's 
	//purpose is to print the sentence to the screen when called.
	string one("This is variable/object1 a sentence/string that will be swapped with string/sentence two.");
	
	//This is the sentnce that we will be swapping positions with.
	string two("This is the variable/object that will be swapped (string/sentence two)");
	
	cout << "\n" << one << "\n" << two << endl;
	
	//This is the swap function (located in the string library) that we can use to perform the swap gracefully.
	one.swap(two);

	cout << "\n" << one << "\n" << two << endl;

	cout << "\nThis is an example of taking a sentence and pulling part of sentence out (sub string)" << endl;
	cout << "This sentence will be used to pull out substring from it." << endl;

	//In this example we are are going to start at the 0 index of the sentence and count right 14 spaces
	//Then we pull out the character at that location (w) and count 12 postions to the right. We take
	//that piece of the sentence/string and display it to the screen.
	string s2("This sentence will be used to pull out substring from it");
	cout << s2.substr(14, 12) << endl;


}