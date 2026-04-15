#include <iostream>
#include <string>//This header is needed to access the library that contains the string functions.
using namespace std;


//In this tutorial we wil be using string functions to operate on the same sentence. 
//We will use the replace(); and insert(); functions

int main() {

	//We start by creating a string object (s1) with a string parameter. This is a constructor so when it
	//is called it is created and initialized at same time.

	//Instantiate a string object named s1 of the string class with an argument sentence saying you completed
	//TNB tutorials more than you can count but actually now look younger than bucky and wonder if he's ok...
	//CODE:
	

		//Print the s1 object to the screen. Again, its parameter is what is in the object. So you have
		//an object AND that object has a sentence on/in it.

		//Add cout statement to show s1 (sentence/string) to the screen.
		//CODE:
		

	//Now we take that sentence and use the replace function to take out "Adam" and put Kanopi Oppie in
	//its place. We start at the left/0 index and count 17 element to the right. That index location contains
	// A as its value we then count 4 elements to the right, this is what is being replaced. So we take 
	// Adam out and replace it with Kanopi Oppie. The substring being replaced does NOT need to have the 
	//same number of elements as the substring that replaces it. Adam has 4 elements. Kanopi has 12.
	//the s1.replace function contains 3 parameters. 1. How many elements to count 2. followed by how many
	//elements of the substring we are replacing 3. And what to replace those elements/characters with.
	
	//IMPORTANT -> You don't need to say "string" s1 again since it is already been assigned above and the 
	//variable s1 has not changed. If you did put "string" before you would get a syntax error because you'd
	//be trying to declare a new variable, which doesnt make sense here.
	//CODE:


	//Call the function replace() with arguments 17, 4,"Kanopi Oppie" on the s1 object. Then see the new
	//sentence to the screen (s1 object).
	//CODE:
	

	//CODE:
	

	//Here we take that modified sentence and again start out at index 0 and count 16 elements to the right
	//Then we call the insert() function on the s1 object. It contains two parameters. 1. Number of elements
	//to count. 2. What to insert into the string at index location 16.

	//Call the insert() function with arguments 16 and "Developer"
	//CODE:
	

	//CODE:
	

	//Here is just another example of the the replace function to demonstrate that we start at the index
	//location of 0 when modify since computers start counting at 0 not 1 like humans.

	//Call the replace() function again with arguments 0, 5, "Adam" on the s1 object and then add
	//a cout statement to show that sentence (s1 object) to the screen.
	//CODE:
	

	//CODE:
	

}