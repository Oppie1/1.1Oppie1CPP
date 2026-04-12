#include <iostream>
#include <fstream>//This library is needed when working with files.
using namespace std;


//A simple example of creating and writing to a file. The file will be saved to the folder that the entire program exists in.
//When you change it here you are changing it in the file within the folder. It is similar to using a cout statement but instead
//of displaying the test to the screen we are creating a text file and print the sentence to that file. Once you have run the program
//go to File -> open -> navigate the the "kanopi.txt" file (may just say "kanopi". And open the file. The file should open to a page
//that shows the sentence you wrote in main(). 

int main() {

	//Use the ofstream class to work with files. This is why you needed the <fstream> library in the header. It contains classes
	//that have access to member variables/functions that allow us to create and save files to folders.
	//Here we create an adamFile object whos scaffolding/architecture is built of the classes blueprint.

	//Instantiate an object (here adamFile) of the ofstream (#include <fstream> header) class.
	//CODE:

	
	//Now we take that object and "add"=dot (.) separator function "open" with a parameter of "kanopi.txt" to create a file.
	//"open()" is  a member function of the ofstream class (part of fstream header).
	
	//Call the open() function with the parameter "kanopi.txt" on the adamfile object.
	//CODE:
;

	//Now we write the the file via the object. So again its like a cout << except we use the adamFile << object to write to the 
	//file we just "opened" -> This is behind the scenes you don't actually see it open (that's for later) but it is there and 
	//ready to be written to. And so the sentence below is written to file.

	//Use the adamFile object to write a message to the file about Kanopi. 
	//CODE:


	//Now we close the file. And the data is saved within.
	
	//Use the close() function on the adamFile object to finalize the write operation and close the kanopi.txt file,
	//ensuring all buffered dta is written to disk.
	//CODE:
	
	
}

//Again, if you want to see the file with the sentence you just created go to the folder that contains this program and open it.
//Or the easy route which is to go to the top tool bar -> File -> Open -> File.

//Now go check if file was created and the sentence written to file (file -> open -> open file _>

//The close() function flushes the buffer - meaning it forces all the buffered data to actually be written to the 
//file on the disk and then closes the file connection.
//Without  close() the file might not contain all the data you wrote, because the buffered data may not have been saved
//to disk yet. Since close() does more than just write - it also closes the connection to the file so you can't accidently
//write to it again.