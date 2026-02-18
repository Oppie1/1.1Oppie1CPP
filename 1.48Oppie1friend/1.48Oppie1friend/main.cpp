#include <iostream>
using namespace std;



class ClaudiaVilla {

public:
	//This is a constructor that automatically sets the claudiaVar to 0. This is like making a box
	//we nothing in it but a molded spot for a tool imprinted with 314
	ClaudiaVilla() {
		int claudiaVar = 0;
	}

private: 
	//This is that same variable's storage location within the private access specifier.
	//The main part of this tutorial is to show how we can use a function outside of the class
	//to access and change the variable.
	int claudiaVar;

	//This is the prototype of the function. It is important to note the parameters:
	//claudiaFriend -> function with parameters ->(ClaudiaVilla& cvo). So we are using the class
	//ClaudiaVilla with the "&" address of operator the data type of the parameter. The "cvo"
	//is just a variable that acts as an object placeholder for the object in main (adamObj).
	friend void claudiaFriend(ClaudiaVilla& cvo);

};
	//This is the function definition of the friend function outside of main.  It is able to be called
	//upon because of the prototyped established with key word friend inside of the ClaudiaVilla class
	//in the private access specifier. We use void so when main calls this it exectues and prints
	//The information the function contains to the screen. So again, what we are saying in the function
	//prototype parameter is -> look in class -> here is a placeholder object of that class.
	void claudiaFriend(ClaudiaVilla& cvo) {
		//The following function that runs when called via the object in main.
		//When called a secret number only a friend of the class can have is returned:\n" << endl;
		cvo.claudiaVar = 314;
		cout << cvo.claudiaVar << endl;
		
		
	}

	int main() {

		//Here we create and object of the ClaudiaVilla class. We then use that object to as a 
		//parameter of the ClaudiaFriend function. The call comes from main but since the function
		//is a void the output prints from the function outside of main and outside of the 
		//ClaudiaVilla class. 
		cout << "This demonstrates using the friend key word to call an object outside of the class" << endl;
		cout << "Claudia makes a box that has a tool with a number on it. That number is:" << endl;
		//Here we create an object (like an empty box) via a constructor. We can now add a function
		//like adding a tool to the box. 
		ClaudiaVilla adamObj;
		//Notice here the the function below represents the prototype we established in the private
		//section of main. This function-and its argument(adamobj) feed into those parameters
		//claudiaFriend(ClaudiaVilla& cvo); -> This is like opening the box and finding the number
		claudiaFriend(adamObj);
}