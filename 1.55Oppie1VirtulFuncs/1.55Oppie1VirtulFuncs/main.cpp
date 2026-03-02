#include <iostream>
using namespace std;


//Create a class of type enemy. This will be the base class.
class Enemy {
public:
	//When using the virtual keyword your telling C++ that when an object is called in main()
	//and it asks for a function to be called on that object but that function does not exist
	//in the given derived class (Here we comment out Ninja) that the virtual function from
	//the base class takes over and prints a default function (here a cout statement).
	virtual void attack() {
		cout << "I am the default attack when there is no attack for given object." << endl;
	}
};

//Ninja is the derived class and so has access to the public Enemy function when it's attack
//function is not declared.
class Ninja : public Enemy {
public:

	//***Here we comment out the Ninja attack function and the Enemy class member function
	// takes over***
	
	//***If you uncomment out the Ninja attack() function the attack will overwrite the 
	//virtual base class member function and just print the Ninja attack() function to screen.

//	void attack() {
//		cout << "Ninja attack! " << endl;
	//}
};

class Monster : public Enemy {
public:
	//This is not commented out and will execute as normal and print Monster member to screen.
	void attack() {
		cout << "Monster attack! " << endl;
	}
};

int main() {
	//Creates a Ninja object n
	Ninja n;
	//Creates a Monster object m
	Monster m;
	//Creates an object pointer of class enemy (enemy1) and sets it equal to the memory address
	//of the Ninja object n.
	Enemy* enemy1 = &n;
	//Creates an object pointer of class enemy (enemy1) and is set equal to the memory address
	//of the Monster object m.
	Enemy* enemy2 = &m;
	//Use object pointers to and arrow memeber seclection operator to call the attack function
	//of both the Ninja and Monster class. In the instance that there is no attack() function
	//in either the Ninja or Monster class use the virtual function in the Enemy base class.
	enemy1->attack();
	enemy2->attack();
}