#include <iostream>
#include <string>
using namespace std;



//Below are two examples of using a constructor to initialize members with multiple pieces of data at once.
//This allows us to reduce code in that we dont have to list each objects attributes on another line like this:



class OppieClass1 {

public:

	//The following are local storage variables to store information from the object. We first get he information from user which stores here
	//Then we retrieve this information oppie1Object and "." dot separator. Basically what we are saying is that oppie1Object + name
	//When we say "local" variables we are saying local to the program. Its storage space within a given function/program/class.
	
	string name; //This is a storage variable that stores name from the constructor that we enter in within main
	int age;//This variable will store age
	double gpa;//This variable will store gpa


	OppieClass1(string a, int b, double c) {//This constructor "template" has matching information and structure within main()
		//e.g. OppieClass1 oppieObject1("Claude", 33, 3.7) -> That information goes from there into each variable in (      )
		//programmer puts the actual information in main(). 

		//That information is stored in each variable and made an attibute within the class (stored in local variables)
		//This is the body of the function. The functions sole purpose is to take the data and put it into each storage box/variable. 
		name = a;
		age = b;
		gpa = c;
	}//This is the end of the function -> So in programing functions look like: f(parameters/info placeholders){ Do this thing...    }

	void study()//This is just a standard function with a void type. So main() tells it to do something and it performs that action outside 
		//main function then the program goes back to main and goes to next step
	{
		cout << "Claude is studying" << endl;//So this is the only thing the "answer" to the function does. Just shows something to screen
	}

};

//Another example. EXACT same concepts as above. Feel free to comment lines out "//" before each line to just see the output of OppieClass1 example
//You can have multiple classes outside of the main program. Here is another example
class CarClass {

public:

	int age;
	string make;
	string model;


	CarClass (int x, string y, string z) {

		age = x;
		make = y;
		model = z;
	}

	void brake()
	{
		cout << "Car hit the brakes!" << endl;
	}

};


int main() {

	//This is the main program. Understand that it is connected to the classes outside the program. It is actually a function as well.
	//When I say it "calls" functions in the other classes just understand that the functions are like mini-programs the are being
	//directed to do thing from here in main.
	
	cout << "\nExample of using a 'public:' access specifier to demonstrate constructor which is doing two things at once:\n"; 
	cout<<"1. Create box/blank form. 2. put some default info in it!\n\n";

	cout << "\n-----Examples Out put from constructors -> Creates object and default information. e.g. object(info in object)---------" << endl;
	cout << "\nExample 1 (OppieClass oppieObject1(name, age, gpa):\n";
	//Below we are saying use OppieClass1 (blueprint) to build oppieObject1 -> (with info pre filled)-> oppieClass1(name, age, gpa)
	OppieClass1 oppieObject1("Claude", 33, 3.7);//Tells computer create object and fill that object with this info (look at OppieClass1 for info
	cout << oppieObject1.name << endl;//print to screen the name (which is stored in the variable in the OppieObject)
	cout << oppieObject1.age << endl;
	cout << oppieObject1.gpa << endl;
	oppieObject1.study();

	cout << "\nExample 2 (OppieClass oppieObject1(name, age, gpa):\n";
	//Feel free to change the information in the ( ) to see what happens to output!
	//Quick note: Information in within the ( ) here are called arguments.
	OppieClass1 oppieObject2("Adam", 42, 4.0);//No need to use a setter function
	cout << oppieObject2.name << endl;
	cout << oppieObject2.age << endl;
	cout << oppieObject2.gpa << endl;
	oppieObject1.study();

	cout << "\nExample 3 (CarClass carObject1(year, make, model):\n";

	//Another example just to show you can have main drawing from multiple classes. EXACT same concepts as above.
	CarClass carObject(2015, "Toyota", "Corolla");
	cout << carObject.age << endl;
	cout << carObject.make << endl;
	cout << carObject.model << endl;
	carObject.brake();

}