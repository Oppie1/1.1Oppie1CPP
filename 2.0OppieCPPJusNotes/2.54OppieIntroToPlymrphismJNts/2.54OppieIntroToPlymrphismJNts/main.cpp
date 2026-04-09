#include <iostream>
using namespace std;


//In this tutorial we will demonstrate polymorphism in C++. Polymorphism refers to the
//ability of a single function, operator, or object to behave differently in different
//contexts. It is a key concept in object-oriented programing that allows for flexibility and
//reusability in code.

//Here we create a class Enemy which is a base class.
//Declare a class named Enemy 
//CODE:


	//Although this is a protected storage member variable the derived classes Ninja and Monster 
	// still have access to and can use whatever the stored value is.

	//Declare a protected access specifier.
	//CODE:


	//Declare a integer variable to hold the attack power.
	//CODE:
	int attackPower;

	//Declare a public access specifier
	//CODE:


	//The following a member function of the Enemy class that can set the int a in the 
	//function prototype to initialize the storage variable attack power.

	//Declare a void function to set the attack power with a integer parameter variable a. Then assign that parameter ato
	//attackVariable you just created in protected to a.
	//CODE:
	
		
		//assign attackPower to the integer parameter a.
		//CODE:


//Ninja is a derived class of the base class Enemy and therefore can use all of its public
//and protected member variables and functions. It cannot use private members.

//Declare a derived class Ninja of Base class Enemy.
//CODE:



	//Declare a pubic access specifier.
	//CODE:


	//This function displays a cout statement to the screen. It is able
	//to access the variable attackPower from Enemy. 

	//Declare a void attack() function that prints out I am a ninja ninja chop and then the attackPower variable to the screen.
	//CODE:


//Declare a derived class Monster with the base class Enemy.
//CODE:


	//This function displays a cout statement to the screen. it is able to access the 
	//variable attackPower from Enemy.
	// 
	//Declare a public access specifier
	//CODE:


//Declare a void attack() function that says I am a monster and must eat you. Then attackPower to the screen.
//CODE:


int main() {
	//Create an object of the Ninja class. A derived class of base class Enemy.

	//Declare an n object of the Ninja class.
	//CODE:
	

	//Create an object of the Monster class. A derived class of base class Enemy.

	//Declare an m object of the Monster class
	//CODE:
	

	//Enemy class pointer to (creates) Enemy object from the Enemy class. Acts like a
	//blueprint for that object. This is then set equal to the memory location 
	//of the "n" (Ninja) object. And so can act on those objects via set attack power.

	//Declare and initialize an Enemy class pointer named enemy1 to hold the memory address of n.
	//CODE:
	

	//Enemy class pointer (creates) Enemy object object from the Enemy class. Acts like a
	//blueprint for that object. This is then set equal to the memory location of the
	// "n" (Ninja) object. And so can act on those objects via set attack power.

	//Declare and initialize a pointer named enemy2 to hold the memory address of m.
	//CODE:
	

	//Here we use an arrow member selection operator setAttackPower to a value.
	//The function call sets the arguments here (29) to "fill in the parameter (int a)
	//setAttackPower is set equal to the variable attackPower = a; Which then sets the
	//value int attackPower storage variable to a value for the enemy1 object (n/Ninja)
	
	//Use the pointer enemy1 with the arrow member selection operator with setAttackPower() function to set attack power 
	//to 29 int the calls argument.
	//CODE:
	

		//Same concept and so Enemy2 is set equal to the setAttackPower function with an 
		//argument setAttackPower(29) -> (setAttackPower(int a). This fills in the parameter 
		//which was set equal to attackPower = a;

		//Use pointer enemy2 with the arrow member selection operator to set the attack power function call to 99 in argument.
		//CODE:


	//Here because n is a derived class it has access to the variable attack power in Enemy

	//Call the attack function on the n object.
	//CODE:


	//Because m is a derived class it also has access to the variable attack power in Enemy.

	//Call the attack function on the m object
	//CODE:
	

}