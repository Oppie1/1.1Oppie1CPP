#include <iostream>
using namespace std;


//An abstract class is a class that contains at least one virtual function. A virtual function that is set 
//to zero in the base class just tests to make sure each derived class has a working function. If a derived
//class does not and tries to run the base class in its place the program will receive an error message.

//Declare a class named Enemy
//CODE:



//Declare a public access specifier
//CODE:


	//A pure virtual function is declared with "=0" at the end. It has no implementation in the base class.
	//Any derived class MUST override this function or it will be come abstract as well as it inherits 
	//the base class function that is set to 0 -> which is a null terminator value so you are basically just setting
	//the program not to work. They serve as a blueprint to derived class stating it must override this function  with
	//their own "attack()"

//Declare a pure virtual void attack() function (= 0 means no implementation in base class)
	//CODE:


//Ninja is a derived class that overrides the base classes attack() function and program would work normally.
//Declare a a derived class Ninja with the base class Enemy
//CODE:


	//Declare a public access specifier
	//CODE:



	//This attack runs and is printed to the screen.
//Override the base class Enemy attack() function with Ninja's implementation. void attack() "Ninja attack!"
//CODE:
	

//Monster is a derived class that overrides the base classes attack() function and program would work normally.

//Declare a derived class Monster with the base class Enemy
//CODE:
	

		//Declare a public access specifier
		//CODE:
	

		//This attack runs and is printed to the screen
	//Override the base class attack() function with Monster's implementation. "Monster attack!"
	//CODE:
	

//The Orc class has no function to override the base class virtual void and so it becomes an abstract class as it inherits from
//the base class Enemy. The program will not work since Orc is unable to supply its own attack() function.

//Declare derived class Orc with a base class Enemy.
//CODE:
	

		//***Try uncommenting this line out and see what happens (the program will work!).
		// 
		//void attack() {
		//	cout << "I am orc attack! If I were commented out the program will NOT run (gets error)." << endl;
		//}

	

int main() {
	//The n object is built from the Ninja class.
	// 
	//Instantiate an object named n of the Ninja class.
	//CODE:
	

	//The m object is built from the Monster class.
	//Instantiate an object named m of the Monster class
	//CODE:
	

	//Instantiate an object o of the Orc class
	//CODE:
	

	//-> Without a working attack() function we are unable to have a working object.

	//Enemy pointer (*) points to/creates an enemy1 object which is set equal to (&) the memory address of n. And so can be manipulated.
	//Declare a pointer enemy1 of class Enemy that holds the memory address of n
	//CODE:
	

	//Enemy pointer (*) points to/creates an enemy1 object which is set equal to (&) the memory address of n. And so can be manipulated.
	//Declare an enemy2 pointer of Enemy class that holds the memory address of m
	//CODE:
	

	//Declare an enemy3 pointer of class Enemy that holds the memory address of o.
	//CODE:
	
	
	// -> There is nothing for the Enemy* object pointer to point to... No Enemy3 or &o.

	//The enemy1 object attack() function has working attack() from the Ninja class and so overrides the pure virtual function in Enemy
	//Call the attack function using the enemy1 pointer and the arrow member selection operator 
	//CODE:
	

	//The enemy2 object attack() function has working attack() from the Ninja class and so overrides the pure virtual function in Enemy

	//Call the attack() function using the enemy2 pointer and arrow operator
	//CODE:
	

//Call attack() through the enemy3 pointer, which invokes Orc's implementation (but here will cause an error since orc has no implementation
	//CODE:
	
	
	//Again, and just to stress the point. When Orc does not run the chain of events do not run either.
}