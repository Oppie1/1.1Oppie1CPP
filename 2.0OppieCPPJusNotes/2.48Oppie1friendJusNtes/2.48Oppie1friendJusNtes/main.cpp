#include <iostream>
using namespace std;



//Declare a class ClaudiaVilla
//CODE:


	//Declare a public access specifier 
	//CODE:


	//This is a constructor that automatically sets the claudiaVar to 0. This is like making a box
	//we nothing in it but a molded spot for a tool imprinted with 314
//Make a constructor declaration/declare a constructor named ClaudiaVilla and assign claudiaVar private member variable to 0 in the body
//CODE:


	//This is that same variable's storage location within the private access specifier.
	//The main part of this tutorial is to show how we can use a function outside of the class
	//to access and change the variable.
//Declare a private access specifier.
//CODE:


	//Declare a integer variable from the constructor private member you created (it was assigned to 0 in constructor)
	//CODE:
	

	//This is the prototype of the function. It is important to note the parameters:
	//claudiaFriend -> function with parameters ->(ClaudiaVilla& cvo). So we are using the class
	//ClaudiaVilla with the "&" address of operator the data type of the parameter. The "cvo"
	//is just a variable that acts as an object placeholder for the object in main (adamObj).

//Declare a friend void function prototype named claudiaFriend with the parameter constructor ClaudiaVilla memory address with object cvo.
//CODE:



//This is the function definition of the friend function OUTSIDE of main.  It is able to be called
//upon because of the prototyped established with key word friend inside of the ClaudiaVilla class
//in the private access specifier. We use void so when main calls this it executes and prints
//The information the function contains to the screen. So again, what we are saying in the function
//prototype parameter is -> look in class -> here is a placeholder object of that class.

//Define a void claudiaFriend function definition with ClaudiaVilla constructor memory address class datatype and cvo object
//CODE:
	

	//The following function that runs when called via the object in main.
	//When called a secret number only a friend of the class can have is returned:\n" << endl;
	
	//call the claudiaVar variable (was assigned to 0 in constructor body) on the cvo object and set it equal to 314,
	//CODE:
		

	//create a cout statement that shows call on object with new claudiaVar value/same as like a function with . to the screen
	//CODE:


int main() {

	//Here we create and object of the ClaudiaVilla class. We then use that object to as a 
	//parameter of the ClaudiaFriend function. The call comes from main but since the function
	//is a void the output prints from the function outside of main and outside of the 
	//ClaudiaVilla class. 
	cout << "This demonstrates using the friend key word to call an object outside of the class" << endl;
	cout << "Claudia makes a box that has a tool with a number on it. That number is:" << endl;
	//Here we create an object (like an empty box) via a constructor. We can now add a function
	//like adding a tool to the box. 

	//Instantiate/Create/Create an instance of an object of the Claudia class 
	//CODE:
	

	//Notice here the the function below represents the prototype we established in the private
	//section of main. This function-and its argument(adamobj) feed into those parameters
	//claudiaFriend(ClaudiaVilla& cvo); -> This is like opening the box and finding the number
	
	//Call the claudia friend function with the parameter of the object you just created.
	//CODE:


}