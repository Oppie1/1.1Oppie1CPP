#include<iostream>
#include<string> // gives you string functions
using namespace std;

//The core function from this tutorial are at and length.
//at()--> The at() function is used to access a character at a specific index within the string.
//length()--> function returns the number of characters in the string objects (provides length of string)

int main() {
	//Strings are arrays of characters. Anything you can do to an array you can do to a string.

	//Declare a string variable named s1 and initialize it to a sentence (ex. "hello how are you")
	//CODE:
	

	//These characters are elements in a string so:
	//o=0,m=1,g=2,w=3, ect. So w is s1 at 3 (see below)

	//Use a for loop with the length() function and a cout statement to print that sentence to the screen.
	//CODE:
	

	//This is loops through all elements in the string until the last element. Instead
	//of printing one character it will print the entire string. (the entire sentence to the screen)
	//Use the at() function with s1 and x as its argument on ONE LINE (hint not endl; or \n necessary).
	//CODE:
		

	cout << "\nPull a letter from that sentence using the at() function: " << endl;
	//Use at function to pull out the letter w from the s1 string/sentence and use cout to print to screen.
	//CODE:
	

	//This will look to the third element in that array. Using the "at" function
	//is a little easier than using the array indexes right there. This will print out a w

	//Just like in an array where we can loop through and print out each one of its indexes we can also
	//loop through a string:
	

	cout << "\n---getline example---" << endl;
	
	//Declare an uninitialized string variable named x.
	//CODE:
	

	cout << "\nPlease enter a short sentence:" << endl;

	//Use the getline(,) function to "cin" the data from "x"
	//CODE:
	

	cout << "\nThe sentence you just wrote was:\n";

	//cout sentence x to the screen.
	//CODE:
	

	cout << "\n---------------------------------------------------------------------\n" << endl;
	cout << "\nSetting string variable to a word/sentences. Understand variable can be initialized like an \n";
	cout << "object because technically it is an object\n";

	//Declare a string variable s2 with the argument "hamster"
	//CODE:
	

	//Declare two more uninitialized string variables s3 and s4.
	//CODE:
	

	//Add a cout statement with description to show s2 out to the screen.
	//CODE:
	

	cout << "\n---Setting string equal to another string (s2 or s3 here) directly and using the assign() function.\n";
	//Assign s3 to s2 directly.
	//CODE:
	

	//Assign s4 using the assign() function like an object using the dot . separator.
	//CODE:
	

	cout << "Show that output to the screen: \n";
	//Add a cout statement to display of each variable s1, s2, s3 to the screen.
	//CODE:


	cout << "\n---Example of NOT using getline() function and what happens when just cin is used---\n";

	//Declare an uninitialized string variable named adam.
	//CODE:
	

	cout << "Enter a short sentence: \n";
	//Write a cin statement to bring in and store the sentence in the string variable named Adam
	//CODE:
	

	//Add a cout statement to display that sentence stored in adam to the screen.
	//CODE:

}

//string x; 
////whenever you want to read in an entire line of data you use "getline"
// getline(cin, x)
// cout<< x<< endl; Now instead of reading in entire line
//**by using getline the end of an input is determined by a new line character (endl).
// -------------------------------------
//string s1("hamster ") //Now hamster will be equal to s1.
//string s2;//This creates a blank string
//string s3;

//Any time you want to copy a string you can set s1 equal to s2 (so s2 is hamster
//s2 = s1;//Like this
//s3.assign(s1);//using "assign" - this is a function from the string class. This "copys" so if you wanted to have
//s3 the same as s1 (string 3 and string 1) Each of these functions do the exact same identical thing
//Each of these function copy each string to the new variable s1 to s2/s3

//cout << s1 << s2 << s3 << endl; //After executing/programing/coding the above the output of this line of code will be
//hamster hamster hamster.
//So again using "assign" is an alternative to copying strings
//------------------------------------------
//string bucky;
//cin>> bucky;
//cout << "the string I entered is: " << bucky << endl;
//This will only read in one word not whole sentence

//**Whenever using cin to read data in whether its from the keyboard or a file the end of the input is determined
//by the first whitespace character it comes across. "tuna" sandwich example only would print out tuna
//cin only reads in one small piece of data at a time. So we use getline and a new line character endl or \n to
//output full sentence (tuna sandwiches are darn good example - whole sentence is seen to screen and when you
//press enter the full sentence is printed to the screen.