#include <iostream>
#include<fstream>//Must include this header/library when dealing with files. Contains classes and members to do so (functions/variables).
using namespace std;


//This program demonstrates opening a file and then using a while loop to effectively and efficiently write data that 
//is input by a given user into a file. After you run this program you will be able to access the file and see the information
//written to it. So once you have run the program go to File-> open -> file -> locate "molts.txt" and open it. You should see the
//data input from user displayed to the file. Basically, its the same as using a cin statement and then a cout statement to 
//display the information to the screen.

int main() {

	cout << "Create a file and variables that store information. Then write/cin file and write information to it." << endl;

	//Here we create an object to hold the file "molt.txt" and the information we cin to it/write to it.
	//ofstream is a class that allows us to create a file and write information to it. Literally means "output file stream".

	//Instantiate an object named adamFile with "molts.txt" as its parameter of the ofstream class
	//CODE:


	//Request information from user
	//IMPORTANT: Let the user know the format you want them to enter as the data needs to be separated in a certain fashion
	//to match the adamFile output (to file)
	cout << "Enter players ID, Name, and Money leaving a space or pressing enter after each piece of data" << endl;
	//This is a default way to quit a program. The information the user is inputting is saving to a file as they go along. When you
	//"quit" the information isn't lost it is in the file molts.txt where this program lives (file->open-> file->molts)
	cout << "press Ctrl+Z to quit\n " << endl;

	//Create variables that will store the information the user enters in.  Make sure the data type matches he input you are asking for.

	//Declare 3 variables int, string, double, that are not initialized that will hold values the user inputs named idNumber, name and money.
	//CODE:
	

	//Here we use a while loop that will keep running/collecting data until the user enters ctrlZ(quit program). It will cycle 
	//through storing the information in the variables you created for the data. The arrows show flow. User "cin" >> to these variables.

	//Declare/create a while loop that controls input by reading into idNumber, name and money via the cin statement.
	//CODE:
	

		//Each pass it will take the user information that was entered and place it into the file (like cout statement but to file)
//We do that by using the adamFile object. The arrows point where the data flow is. User input goes to adamFile (adamFile<<User input)
	//Here we are also creating the format that we want the information to be displayed like in the file itself

		//Within while loop code block write/output to object adamFile (into file molts.txt) the information the user input from the while condition.
		//Make sure you format it with spaces in between each piece of data -> "  "
		//CODE:
	
}