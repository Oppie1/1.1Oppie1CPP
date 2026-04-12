#include <iostream>
#include <fstream>
using namespace std;


//IMPORTANT: After creating "main" source file also create a "Kanopi.txt" under the same name (source file).

int main() {

	cout << "---First example is of a file that opens correctly and therefore can be written to\n" << endl;
	//So when an object is created from the ofstream class and we use a file as a parameter as shown in line below
	//The computer creates (or overwrites) the file in the programs output folder. You can check this out for yourself after
	// you run the code. For the first message it will be attached to an actual file which you can locate.
	//File -> open -> file -> locate file labeled Kanopi and open it. You should see the statement " This is what... " (below)
	//printed within that file.

	//Instantiate an object named adamFile with the parameter "Kanopi.txt" of the ofstream class
	//CODE:


	//Create an if statement with the condition being whether the adamFile is open using the is_open() function. We do this by calling the
	//is_open() function on the adamFile object.
	//CODE:


		//Create a cout statement that lets user know the file has opened successfully.
		//CODE:
	

	//Create a else statement to run if the file did not open successfully with a cout statement stating that to user.
	//CODE:
	

		//This statement will print to the Kanopi.txt file.
		//CODE:
	

	//Use the object (adamFile) to print a statement to the Kanopi.txt file (hint <<)
	//CODE:
	

	//Call the close() function on the adamFile object.
	//CODE:
	

	cout << "\n---Example where file does not open and there for cannot be written to---\n" << endl;
	//So here the path does not exist and so Kanopi2.txt cannot save as it is not a relative path, so it resolves inside the 
	//current working directory (typically the project's output folder -> /1.65OppieTipsForFilHandling (implicit when object is created)

	//Create an object adamFile2 of the ofstream class and make a parameter that purposefully adds a DOESNOTEXIT/ file extension to 
	//the Kanopi2.txt file. File extension is like -> folderName/file. To work you'd have to delete DoesNotExist/ from parameter.
	//CODE:
	

	//Create an if statement with a condition of and adamFile2 object that is open (use the open() function) that adds
	// a cout statement that the file opened successfully to the screen.
	//CODE:
	

		//CODE:
	

	//Create an else statement that executes with the if statement is false that contains a cout statement the the file didnt open correctly.
	//CODE:


	//So you see this to screen and tells the programmer that the file isnt created/opened so there is nothing to write to.
		//CODE:
	

	//There is no file so this cannot write to one that is not there (obviously)

	//Use the adamFile object to write the sentence this is what is written when if statement were true (delete DoesNotExist/)
	//CODE:


	//Call the close() function on the adamFile2 object.
	//CODE:
	

}

//Check for Kanopi2 file in File -> open -> file -> No kanopi2 was created.

//Key points: 
// When you use "DoesNotExist/Kanopi.txt" you're asking the OS to create a file inside the subfolder within the program file
// that is int there (DoesNotExist is the subfolder that's not there). The open fails, adamFile.is_open() returns false and the
// else branch runs.
// It is good practice for programmers to use "is_open" to make sure your actually doi