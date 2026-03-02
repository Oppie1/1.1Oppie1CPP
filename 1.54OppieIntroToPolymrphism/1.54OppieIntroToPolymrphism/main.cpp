#include <iostream>
using namespace std;


//In this tutorial we will demonstrate polymorphism in C++. Polymorphism refers to the
//ability of a single function, operator, or object to behave differently in different
//contexts. It is a key concept in object-oriented programing that allows for flexibility and
//reusability in code.

//Here we create a class Enemy which is a base class.
class Enemy {
//Although this is a protected storage member variable the derived classes Ninja and Monster 
// still have access to and can use whatever the stored value is.
protected:
	int attackPower;

public:
	//The following a member function of the Enemy class that can set the int a in the 
	//function prototype to initialize the storage variable attack power.
	void setAttackPower(int a) {
		attackPower = a;
	}
};
	
//Ninja is a derived class of the base class Enemy and therefore can use all of its public
//and protected member variables and functions. It cannot use private members.
	class Ninja : public Enemy {

	public:
		//This function displays a cout statement to the screen. It is able
		//to access the variable attackPower from Enemy. 
		void attack() {
			cout << "I am a ninja, ninja chop! - " << attackPower << endl;
		}
};

	class Monster : public Enemy {
		//This function displays a cout statement to the screen. it is able to access the 
		//variable attackPower from Enemy.
	public: 
		void attack()
		{
			cout << "\nMonster must eat you!!! " << attackPower << endl;
		}
};

	int main() {
		//Create an object of the Ninja class. A derived class of base class Enemy.
		Ninja n;
		//Create an object of the Monster class. A derived class of base class Enemy.
		Monster m;

		//Enemy class pointer to (creates) Enemy object from the Enemy class. Acts like a
		//blueprint for that object. This is then set equal to the memory location 
		//of the "n" (Ninja) object. And so can act on those objects via set attack power.
		Enemy* enemy1 = &n;
		//Enemy class pointer (creates) Enemy object object from the Enemy class. Acts like a
		//blueprint for that object. This is then set equal to the memory location of the
		// "n" (Ninja) object. And so can act on those objects via set attack power.
		Enemy* enemy2 = &m;

		//Here we use an arrow member selection operator setAttackPower to a value.
		//The function call sets the arguments here (29) to "fill in the parameter (int a)
		//setAttackPower is set equal to the variable attackPower = a; Which then sets the
		//value int attackPower storage variable to a value for the enemy1 object (n/Ninja)
		//
		enemy1->setAttackPower(29);

		//Same concept and so Enemy2 is set equal to the setAttackPower function with an 
		//argument setAttackPower(29) -> (setAttackPower(int a). This fills in the paramter 
		//which was set equal to attackPower = a;
		enemy2->setAttackPower(99);

		//Here because n is a derived class it has access to the variable attack power in Enemy
		n.attack();
		//Because m is a derived class it also has access to the variable attack power in Enemy.
		m.attack();
}