#include <iostream>
using namespace std;


//Create a class of type enemy. This will be the base class.

//Declare an Enemy class
//CODE:


//Declare a  public access specifier.
//CODE:


	//When using the virtual keyword your telling C++ that when an object is called in main()
	//and it asks for a function to be called on that object but that function does not exist
	//in the given derived class (Here we comment out Ninja) that the virtual function from
	//the base class takes over and prints a default function (here a cout statement).

//Declare a  virtual void attack() function and define with a cout statement that it is the default attack when none given
//CODE:


//Ninja is the derived class and so has access to the public Enemy function when it's attack
//function is not declared.

//Declare a derived class named Ninja of the Base class Enemy
//CODE:


//Declare a  public access specifier.
//CODE:


	//***Here we comment out the Ninja attack function and the Enemy class member function
	// takes over***

	//***If you uncomment out the Ninja attack() function the attack will overwrite the 
	//virtual base class member function and just print the Ninja attack() function to screen.

//	void attack() {
//		cout << "Ninja attack! " << endl;
	//}


//Declare a Monster derived class of the Base class Enemy
//CODE:


//Declare public access specifier.
//CODE:


//This is not commented out and will execute as normal and print Monster member to screen. 
//Declare a a monster void attack function that prints I am a monster attack to the screen
	//CODE:


int main() {
	//Creates a Ninja object n
	//Declare a n object of class Ninja.
	//CODE:
	

	//Creates a Monster object m
	//Declare an m object of class Monster
	//CODE:


	//Creates an object pointer of class enemy (enemy1) and sets it equal to the memory address
	//of the Ninja object n.
	

	//Declare a pointer named enemy1 of class Enemy that holds the memory address of n.
	//CODE:

	
	//Creates an object pointer of class enemy (enemy1) and is set equal to the memory address
	//of the Monster object m.

	//Declare a pointer named enemy2 of class Enemy that holds the memory address of n
	//CODE:


	//Use object pointers to and arrow member selection operator to call the attack function
	//of both the Ninja and Monster class. In the instance that there is no attack() function
	//in either the Ninja or Monster class use the virtual function in the Enemy base class.

	//Use the enemy1 pointer with the member arrow selection operator to call the attack() function.
	//CODE:


	//Use the enemy2 pointer with the member arrow selection operator to call the attack() function.
	//CODE:


}