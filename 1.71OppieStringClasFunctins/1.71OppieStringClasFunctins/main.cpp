#include<iostream>
#include<string> //This library gives you classes which contain member string funcitons.
using namespace std;


//In this tutorial we will cover class string functions. We need to include the string library in order to access these functions.
//Here are a few simple examples of how strings work and examples of a couple of functions from that library.

//Key point: the s1, s2 , s3, s4 are both variables (named storage location with type string) AND objects - since any variable
//of class type is an instance(object) of that class.

int main() {

	//Here we create a string. In this case there are spaces and so they are part of the total string. Even the spaces hold an index
	//location. REMEBER: Computers start with an index location of "0" not "1" as is the case with humans. So in the string below
	//the index location of "C" in the word "Characters" is at index "0", "h" is at index "1", "a" is at index 2, ect.
	string s1 = "Characters forming a sentence (string) with no spaces.\n";
	//This object s2 is of the string class. It has a parameter of "Hamster". The s3 and s4 are not initialized to anything
	string s2("Hamster");
	string s3;	
	string s4;

	//One way to pick our a letter at a given location is to use the at() function from the string library. So with the string/sentence
	//above we can find what character is at a given index location by setting the parameter to a value. The value just needs to be
	//within the number of characters in the sentence. We use "3" as the index location which corresponds to "r" in the sentence. If
	//we use an index number where there happens to be a space nothing will print to screen. Tray using at(10) and see what happens.
	cout << s1.at(3) <<"\n" << endl;

	//In order to print out the whole sentence try using a for loop and the function "length()". We assign x to be our counter
	//variable and set it equal to 0 (C in our sentence). Then we "operate on the string/sentence s1. s1 is a variable but
	//acts as an object of the string class and so we can use the dot "." separator with function length() to get whole sentence
	//of characters and then use at() function to display the whole sentence to the screen. For loop must fully execute meaning it
	//performs multiple passes printing one letter to the screen at a time until the full string/sentence is printed.
	for (int x = 0; x < s1.length(); x++) {
		//So first pass would be s1.at(0) -> "C" the second s1.at(1) -> "h" third s1.at(2) ->"a" and so on...
		cout << s1.at(x);
		}

	cout << "\nAssignment example:\n" << endl;

	//Example of s2 being shown to screen.
	cout << s2 <<"\n" << endl;

	//s3 can be set equal to the s2 variable and will assume whatever value that is in memory.
	s3 = s2;
	cout << s3 << "\n" << endl;
	
//Another method is to create an object, which belongs to the string class (declared variable at top), the dot "." separator
//and the "assign(parameter can be variable)" function setting its parameter to (s2) and s4 will assume the value located at s2 in memory
	s4.assign(s2);
	cout << s4 << "\n" << endl;

	//Now that all variables have been assigned from origin s2 when we print all to screen we should see "Hamster" 3 times (with spaces)
	cout << s2 << ' ' << s3 <<' ' << s4 << endl;
}