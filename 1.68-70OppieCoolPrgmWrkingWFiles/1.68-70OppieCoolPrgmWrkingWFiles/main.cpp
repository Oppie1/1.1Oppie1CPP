#include <iostream>
#include <fstream>//Need this library to access ifstream (input file stream -> allows access of file contents)
using namespace std;

//An example of a program that puts a lot of what we have learned together.
//First create a file named "items.txt" in notepad with a list of items and their powers.
//Make a few items neutral (0) power, positive power(1+) or negative power (-1 or less)
//Important. Make sure make list with a space between the name and and the power level.
//The notepad file needs to be tab delaminated to match your cout statement in "display items"
//function. This just means to put a space between each different type of data (in notepad file). Technically 
//you could do this on one line (ex. chair 0 ninja -54 fruit 43 ect.) but it is common practice and
//heavily encouraged that you use rows AND Columns like this for readability:
//chair 0
//ninja -54
//fruit 43
//ect.


//This is function protype just tells the compiler that this function exists and can be called in main() to
//corresponding definition below main.  When called it just displays a list 1-3 to choose from and 4 to quit.
//Important: The "getWhatTheyWant" function contains the displayItems function as well as allows the user
//to make a selection using the switches case criteria. They work in tandem to produce the desired output 
//to screen and selection from user.

int getWhatTheyWant();

//This displays the items to the screen that the user will choose from. It is attached to the notepad
//text file you made. It access that information and the users selection which it then shows that
//information to the screen.
void displayItems(int x);


int main() {

	cout << "Game Items Selection and Their Current Power Value" << endl;
	cout << "Enter your selection 1-3. Enter 4 to quit program\n" << endl;

	//This is a local variable to main that will store the users choice within main(). 
	
	int whatTheyWant;

	//We set it equal to the function getWhatTheyWant and it will store that selection.
	whatTheyWant = getWhatTheyWant();

	//The switch statement handles the heavy lifting in main. It is a function as well that is put in main()
	//that's responsibility is to take the user input 1,2 or 3 and the use the function call associated
	// with their case selection that corresponds to display items parameter. 

	//This is the while loop which will keep running until the user selects 4
	while (whatTheyWant != 4) {
		
		//Important: The switch statement exists within the while loop. The while loop will keep executing
		//this switch statement indefinitely until user selects 4. Switch statement parameter is the call
		//from the getWhatTheyWant() function.  The return statement in the getWhatTheyWant() function
		//replaces getWhatTheyWant() function call. That is then set equal to the storage variable
		//whatTheyWant in main (int getWhatTheyWant;)
		switch (whatTheyWant) {
		
		//This case the user selects 1 which then causes the displayItems(1) function to execute with 
		//"1" as the parameter -> displayItems(parameter)
		case 1: displayItems(1);
			break;//This just means stop this codeblock (dont move to next cases) and go to next step.
			//The next step after cases is back to the while loop that the switch statement exists in.
			//It will keep on running so long as the user does not input 4.
		
		//This case the user selects 2 which then causes the displayItems(2) function to execute with
		//"2" as the parameter -> displayItems(parameter)
		case 2: displayItems(2);
			break;
		
		//This case the user selects 3 which then causes the displayItems(2) function to execute with
		//"2" as the parameter -> displayItems(parameter).
		case 3:
			displayItems(3);
			break;
		}

		//So long as the user does not select 4 this is line of code runs after the switch statement
		//selection and causes the while loop condition to run again. 
		whatTheyWant = getWhatTheyWant();
	}
}

//When called from main this function runs and returns the choice - 1, 2 or 3 to main().
int  getWhatTheyWant() {
	
	//This is a storage variable that exists locally in this function (getWhatTheyWant(){definition}
	//getWhatTheyWant(){} carries no parameters -> getWhatTheyWant(no parameter)
	int choice;

	//This displays to user the three choices
	cout << "1 - Just plain items " << endl;
	cout << "2 - Helpful items " << endl;
	cout << "3 - Harmful Items" << endl;

	//This takes the user choice and stores it in the local variable.
	cin >> choice;
	
	//This takes that choice and returns it to the caller (here main())
	return choice;
}

//This is the function that carries the heavy lifting outside of main. It takes a integer parameter.
//The "x" is just a placeholder for the displayItems call argument in main() within the switch statement.
//-> displayItems(1), displayItems(2), displayItems(3). It then takes that value and runs a few functions 
// that work together. First an if statement with a nested while loop and another if condition. Technically
// the second if statement is nested within the while loop. If you really want to blow your mind you can
// think of the display function itself as nested within the switch statement in main which is nested
// within the while loop in main. Nesting is one of the strongest tools we as programmers have.
//
void displayItems(int x) {

	//We create an object of the ifstream class which allows us to work with files that are located in 
	//the program file.  Here we create an object file with a file (Items.txt) as its parameter. 
	//This is a constructor that allows us to access and work with information within that file.
	ifstream objectFile("Items.txt");

	//This is a local variable that stores the name of the item which can be accessed later when we
	//display out to the screen which items we are dealing with.
	string name;

	//This is a local storage variable that stores the power value that is within the items.txt file as well.
	//We can access this value and display it to the screen.
	double power;

	//This if statement says if the user selects 1 in switch then the displayItems(int x) parameter is set to 1
	//then x is set to 1 here because displayItems(int x) -> displayItems(x) -> displayItems(1)
	if (x == 1) {
		//If this happens it means that the if condition is true, it executes and moves onto the next 
		//code block which is this while loop condition/parameter. So here the "objectFile" is the object
		//that is set equal to Items.txt and so through that object we can access the name and power that
		//is located in the file.
		while (objectFile >> name >> power) {
			//The compiler sees that the user selected 0 so it moves to the cout statement
			if (power == 0) {
				//From the file it prints the name of the object and its power value to the screen
				//This would be a neutral item with 0 power. You need to structure the cout statement 
				//as you want it to be displayed to screen. Here we display one line of code with 
				// a name, a space and power to screen.
				cout << name << ' ' << power << endl;
			}
		}
	}
	//This if statement says if the user selects 1 in switch then the displayItems(int x) parameter is set
	//to 1 then x is set to 1 here because displayItems(int x) -> displayItems(x) -> displayItems(1)
	if (x == 2) {
		//If this happens it means that the if condition is true, it executes and moves onto the next code
		//block which is this while loop condition/parameter. So here the objectFile is the object that is 
		//set equal to Items.txt and so through that object we can access the name and power that is located
		//in the file.
		while (objectFile >> name >> power) {
			//The compiler sees that the user selected 0 so it moves to the cout statement.
			if (power > 0) {
				//From the file it prints the name of the object and its power value to the screen. This
				//would be a positive item with 1 or greater power. You need to structure the cout statement
				//as you want the data to be displayed to screen. Here we display one line of code with
				//a name, a space and power to screen
				cout << name << ' ' << power << endl;
			}
		}
	}
	//Tis if statement says if the user selects 1 in switch then the displayItems(int x) parameter is set
	//to 1 then x is set to 1 here  because displayItems(int x) -> displayItems(x) ->displayItems(1) 
	if (x == 3) {
	//If this happens it means that the if condition is true, it executes and moves onto the next code
		//block which is this while loop condition/parameter. So here the objectFile is the object that is
	//set equal to Items.txt and so through that object we can access the name and power that is located
	//in the file.
		while (objectFile >> name >> power){
	//The compiler sees that the user selected 0 so it moves to the cout statement
			if (power < 0) {
				//From the fileit print the name of the object and its power value to the screen. This
				//would be a positive item with 1 or greater power. You need to structure the cout statement
				//as you want the data to be displayed to screen. Here we display one line of code with
				//a name, a space and power to screen.
				cout << name << ' ' << power << endl;
			}
		}
	}
}