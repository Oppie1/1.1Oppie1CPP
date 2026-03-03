#include <iostream>
using namespace std;


//An abstract class is a class that contains at least one virtual function. A virtual function that is set 
//to zero in the base class just tests to make sure each derived class has a working function. If a derived
//class does not and tries to run the base class in its place the program will receive an error message.

class Enemy {
public:
	//A pure virtual function is declared with "=0" at the end. It has no implementation in the base class.
	//Any derived class MUST override this function or it will be come abstract as well as it inherits 
	//the base class function that is set to 0 -> which is a null terminator value so you are basically just setting
	//the program not to work. They serve as a blueprint to derived class stating it must override this function  with
	//their own "attack()"
	virtual void attack() = 0;
};

//Ninja is a derived class that overrides the base classes attack() function and program would work normally.
class Ninja : public Enemy {
public:
	//This attack runs and is printed to the screen.
	void attack() {
		cout << "Ninja attack!" << endl;
	}
};

//Monster is a derived class that overrides the base classes attack() function and program would work normally.
class Monster : public Enemy {
public:
	//This attack runs and is printed to the screen
	void attack() {
		cout << "I am monster attack!" << endl;
	}
};

//The Orc class has no function to override the base class vitrual void and so it becomes an abstract class as it inherits from
//the base class Enemy. The program will not work since Orc is unable to supply its own attack() function.
class Orc : public Enemy {

	//***Try uncommenting this line out and see what happens (the program will work!).
	// 
	//void attack() {
	//	cout << "I am orc attack! If I were commented out the program will NOT run (gets error)." << endl;
	//}
};

int main() {
	//The n object is built from the Ninja class.
	Ninja n;
	//The m object is built from the Monster class.
	Monster m;
	Orc o; //-> Without a working attack() function we are unable to have a working object.

	//Enemy pointer (*) points to/creates an enemy1 object which is set equal to (&) the memory address of n. And so can be manipulated.
	Enemy* enemy1 = &n;
	//Enemy pointer (*) points to/creates an enemy1 object which is set equal to (&) the memory address of n. And so can be manipulated.
	Enemy* enemy2 = &m;
	Enemy* enemy3 = &o;// -> There is nothing for the Enemy* object pointer to point to... No Enemy3 or &o.

	//The enemy1 object attack() function has working attack() from the Ninja class and so overrides the pure virtual function in Enemy
	enemy1->attack();
	//The enemy2 object attack() funciton has working attack() from the Ninja class and so overrides the pure virtual function in Enemy
	enemy2->attack();
	enemy3->attack();//Again, and just to stress the point. When Orc does not run the chain of events do not run either.
}