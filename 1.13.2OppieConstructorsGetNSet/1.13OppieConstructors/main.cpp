#include <iostream>
#include <string>
using namespace std;




//Below are two examples of using a constructor to initialize members with multiple pieces of data at once.
//This allows us to reduce code in that we dont have to list each objects attributes on antother line like this:


class OppieClass1 {

public:

	string name;
	int age;
	double gpa;


	OppieClass1(string a, int b, double c) {

		name = a;
		age = b;
		gpa = c;
	}

	void study()
	{
		cout << "Claude is studying" << endl;
	}

};

class OppieClass2 {

public:

	OppieClass2(string z) {//When we create a constructor we start with class name. This allows us to do two things at once and eleminates the need
		//to add a line of code in main to "set" the string. This function calls on the function "setName()" and so the action takes place within
		//the class not main()
		setName(z);//Here is the function with "z" as a parameter. "z" acts as a placeholder for whatever the function set name returns
	}

	void setName(string x) {

		name = x;//The "OppieClass(string z)" constructor uses this function to feed into "z" whatever is put into the parameters in main 
	}

	string getName() {//This acts the same as in last tutorial. When called in main this goes into "private:" and retrieves whatever is stored
		//in the "name" variable and returns it to the caller -> which is when we use "getName();" in main.
		return name;
	}

private:
	string name;//This stores whatever sentence we write as an argument in the constructor
	//string name2 = "Hello";
};


int main()
{
	cout << "First we use 'public:' access specifier to demonstrate constructor. A constructor does two things at once, it creates\n";
	cout << "box with something in it. Or a form with spots for name, address, signature, ect. Rather than a blank piece of paper.\n";
	cout << "default construction of the object -> meaning no need to describe each attribute like this:\n";
	cout << "oppieObject.name()->oppieObject.age() -> oppieObject.gpa() ect.\n";
	cout << "It will be done on one line of code: OppieClass1 oppieObject1('Claude', 33, 3.7 )" << endl;


	OppieClass1 oppieObject1("Claude", 33, 3.7 );//No need to use a setter function
	cout << oppieObject1.name<<endl;
	cout << oppieObject1.age << endl;
	cout << oppieObject1.gpa << endl;
	oppieObject1.study();

	cout << "-----Second we use the concept of using getters and setters along with constructors------\n";

	OppieClass2 oppieObject2("Example of constructor with getter and setter!");//This draws from the OppieClass(string z) construtor
	cout << oppieObject2.getName();//Remember "getName()" function is like a little program that acts within the OppieClass to access name in storage
	
	cout << "\n\n-------And the second constructor-------\n" << endl;

	OppieClass2 oppieObject3("I am the second objects constructor!");
	cout << oppieObject3.getName();

	

}