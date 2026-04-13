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

//CREATE A TEXT FILE "Items.txt" WITH THE FOLLOWING INFORMATION THIS PROGRAM WILL PULL FROM:
//chair 0 
//ninja - 54
//fruit 43
//shoe 0
//pencil 0
//candy 87
//soda 32
//meth - 44
//dirty needle - 99


//Declare an integer function prototype "getWhatTheyWant()" with no parameters that will return their choice.
//Code:
int getWhatTheyWant();

//This displays the items to the screen that the user will choose from. It is attached to the notepad
//text file you made. It access that information and the users selection which it then shows that
//information to the screen.

//Declare a void function prototype named displayItems with an integer variable as a parameter to the screen and return nothing.
//CODE:
void displayItems(int x);


int main() {

	cout << "Game Items Selection and Their Current Power Value" << endl;
	cout << "Enter your selection 1-3. Enter 4 to quit program\n" << endl;

	//This is a local variable to main that will store the users choice within main(). 

	//Declare a local integer variable named whatTheyWant that will store their selection.
	//CODE:
	int whatTheyWant;

	//We set it equal to the function getWhatTheyWant and it will store that selection.

	//Assign(set equal to =) the whatTheyWant variable to the function call getWhatTheyWant() with no arguments.
	//CODE:
	whatTheyWant = getWhatTheyWant();

	//The switch statement handles the heavy lifting in main. It is a function as well that is put in main()
	//that's responsibility is to take the user input 1,2 or 3 and the use the function call associated
	// with their case selection that corresponds to display items parameter. 

	//This is the while loop which will keep running until the user selects 4.

	//Create a while loop  with the condition whatTheyWant variable DOES NOT equal 4.
	//CODE:
	while(whatTheyWant!=4){

		//Important: The switch statement exists within the while loop. The while loop will keep executing
		//this switch statement indefinitely until user selects 4. Switch statement parameter is the call
		//from the getWhatTheyWant() function.  The return statement in the getWhatTheyWant() function
		//replaces getWhatTheyWant() function call. That is then set equal to the storage variable
		//whatTheyWant in main (int getWhatTheyWant;)

		//Create a nested switch statement with the condition whatTheyWant. Create three cases 1, 2, 3 that will use the 
		//display items function with numbers 1, 2, 3 as parameters to the function
		//CODE:
		switch (whatTheyWant) {

			//This case the user selects 1 which then causes the displayItems(1) function to execute with 
			//"1" as the parameter -> displayItems(parameter)

		//Create a case 1: and display items when the user selects 1. And then a break statement to prevent fall through.
		//CODE:
		case 1: displayItems(1);

			//This just means stop this codeblock (dont move to next cases) and go to next step.
			//The next step after cases is back to the while loop that the switch statement exists in.
			//It will keep on running so long as the user does not input 4.
			break;
			//This case the user selects 2 which then causes the displayItems(2) function to execute with
			//"2" as the parameter -> displayItems(parameter)

			//Create another case with with the displayItems() function that runs when the user selects 2 and a break to prevent fall through.
			//CODE:
		case 2: displayItems(2);
			break;
			//This case the user selects 3 which then causes the displayItems(3) function to execute with
			//"3" as the parameter -> displayItems(parameter).

		//Create a third case that uses the displayItems() function when the user selects 3 and use break to prevent fall through
		//CODE:
		case 3: displayItems(3);
			//So long as the user does not select 4 this is line of code runs after the switch statement
			//selection and causes the while loop condition to run again. 
			break;
			
		}
		//Assign the same whatTheyWant variable to the getWhatTheyWant() function call with no arguments. This is within
			//the while loop and so will keep running until the user selects 4 (sentinel control).
			//CODE:
		whatTheyWant = getWhatTheyWant();
	}
}

//When called from main this function runs and returns the choice - 1, 2 or 3 to main().

//Define the getWhatTheyWant() function. It will have an integer variable of choice. A list that displays what shows to the user
//choices 1,2 and 3 as well as what they are (plain items, helpful items, harmful items. Then a cin statement for the users choice.
//The a return of choice which will return whatever choice that is to the function call getWhatTheyWant();
int getWhatTheyWant() {

	//This is a storage variable that exists locally in this function (getWhatTheyWant(){definition}
	//getWhatTheyWant(){} carries no parameters -> getWhatTheyWant(no parameter)
	//CODE:
	int choice;

	//This displays to user the three choices

	//Add 3 cout statements that display number and corresponding item types to screen (plain, helpful, harmful) to the screen.
	//CODE:
	cout << "1 - Neutral Items" << endl;
	cout << "2 - Helpful Items" << endl;
	cout << "3 - Harmful Items" << endl;

	//This takes the user choice and stores it in the local variable.
	//CODE:
	cin >> choice;

	//This takes that choice and returns it to the caller (here main())

	//Create a return that returns the users choice to main.
	//CODE:
	return choice;

}
//This is the function that carries the heavy lifting outside of main. It takes a integer parameter.
//The "x" is just a placeholder for the displayItems call argument in main() within the switch statement.
//-> displayItems(1), displayItems(2), displayItems(3). It then takes that value and runs a few functions 
// that work together. First an if statement with a nested while loop and another if condition. Technically
// the second if statement is nested within the while loop. If you really want to blow your mind you can
// think of the display function itself as nested within the switch statement in main which is nested
// within the while loop in main. Nesting is one of the strongest tools we as programmers have.

//Define the void displayItems() function with an integer variable as the parameter.
//CODE:
void displayItems(int x){

	//We create an object of the ifstream class which allows us to work with files that are located in 
	//the program file.  Here we create an object file with a file (Items.txt) as its parameter. 
	//This is a constructor that allows us to access and work with information within that file.

	//Instantiate an object named objectFile of the ifstream class with "items.txt" as its argument
	//CODE:
	ifstream objectFile("items.txt");

	//This is a local variable that stores the name of the item which can be accessed later when we
	//display out to the screen which items we are dealing with.

	//Declare an uninitialized string variable named name that will store item names read from the file.
	//CODE:
	string name;

	//This is a local storage variable that stores the power value that is within the items.txt file as well.
	//We can access this value and display it to the screen.

	//Declare an uninitialized double variable named power that will store item power read from file.
	//CODE:
	double power;

	//This if statement says if the user selects 1 in switch then the displayItems(int x) parameter is set to 1
	//then x is set to 1 here because displayItems(int x) -> displayItems(x) -> displayItems(1)

	//Create an if statement with the condition that the user selected 1 x==1. Then a nested while loop that will read in the
	//name and power for the objectFile. Then within the while loop a nested if condition if the power from the file is equal to 0
	//Then add an if statement to print the information from the file to the screen in proper formatting to match the blank spaces in txt file
	//CODE:
	if (x == 1) {

		//If this happens it means that the if condition is true, it executes and moves onto the next 
		//code block which is this while loop condition/parameter. So here the "objectFile" is the object
		//that is set equal to Items.txt and so through that object we can access the name and power that
		//is located in the file.

		//Create a while loop nested in if condition that takes information from the txt file name/power and stores it in the object named objectFile.
		//CODE:
		while (objectFile >> name >> power) {

			//The compiler sees that the user selected 0 so it moves to the cout statement

			//Create an if statement that if the power is equal to 0 in the text file then those items will print to screen.
			//CODE:
			if (power == 0) {

				//From the file it prints the name of the object and its power value to the screen
				//This would be a neutral item with 0 power. You need to structure the cout statement 
				//as you want it to be displayed to screen. Here we display one line of code with 
				// a name, a space and power to screen.

				//Add a cout statement properly formatted with space in between to display name and power to the screen.
				//CODE:
				cout << name << " " << power << endl;
			}
		}
	}

	//This if statement says if the user selects 1 in switch then the displayItems(int x) parameter is set
	//to 1 then x is set to 1 here because displayItems(int x) -> displayItems(x) -> displayItems(1)

	//Create an if condition as if the user were to select 2. Then a nested while loop to extract data name and power from the object objectFile.
	//Then a nested if statement within the while loop that will take that data and test for items that have more that 0 power. Then
	//add cout statement to display properly formatted information to the screen.

	//Create an if condition if the user (x) selects 2.
	//CODE:
	if (x == 2) {

		//If this happens it means that the if condition is true, it executes and moves onto the next code
		//block which is this while loop condition/parameter. So here the objectFile is the object that is 
		//set equal to Items.txt and so through that object we can access the name and power that is located
		//in the file.

		//Create a nested while loop with the condition of retrieving name and power information from the objectFile.
		//CODE:
		while (objectFile >> name >> power) {

			//The compiler sees that the user selected 0 so it moves to the cout statement.

			//Create a nested if statement to test if of those options which items (names) power are greater than 0.
			//CODE:
			if (power > 0) {

				//From the file it prints the name of the object and its power value to the screen. This
				//would be a positive item with 1 or greater power. You need to structure the cout statement
				//as you want the data to be displayed to screen. Here we display one line of code with
				//a name, a space and power to screen

				//Add a cout statement with proper formation to print information to the screen.
				//CODE:
				cout << name << " " << power << endl;
			}
		}
	}

	//Tis if statement says if the user selects 1 in switch then the displayItems(int x) parameter is set
	//to 1 then x is set to 1 here  because displayItems(int x) -> displayItems(x) ->displayItems(1) 

	//Create a cout statement with the condition the the user selected 3. Then a nested while loop with the codition of power and name
	//data from the objectFile (Items.txt) and bringing it into program. Then with a if condition within the while loop tes if items
	//power of the users selection is less than 0. Then print properly formatted information to the screen.
	//CODE:
	if (x == 3) {

		//If this happen it means that the if condition is true, it executes and moves onto the next code
		//block which is this while loop condition/parameter. So here the objectFile is the object that is
		//set equal to Items.txt and so through that object we can access the name and power that is located
		//in the file.

		//Create a while loop the brings power and name data from the objectFile into local variables name and power for storage.
		//CODE:
		while (objectFile >> name >> power) {

			//The compiler sees that the user selected 0 so it moves to the cout statement

			//Create an if condition that will test of those items brought in how many are less than 0.
			//CODE:
			if (power < 0) {

				//From the file it print the name of the object and its power value to the screen. This
				//would be a positive item with 1 or greater power. You need to structure the cout statement
				//as you want the data to be displayed to screen. Here we display one line of code with
				//a name, a space and power to screen.

				//Add cout statement that prints properly formatted data to the screen from the name and power storage variables.
				//CODE:
				cout << name << " " << power << endl;
			}
		}

	}
}