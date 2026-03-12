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
	ofstream adamFile;
	//Now we take that object and "add"=dot (.) separator the keyword "open" with a parameter of "kanopi.txt" to create a file.
	adamFile.open("kanopi.txt");

	//Now we write the the file via the object. So again its like a cout << except we use the adamFile << object to write to the 
	//file we just "opened" -> This is behind the scenes you don't actually see it open (that's for later) but it is there and 
	//ready to be written to. And so the sentence below is written to file.
    adamFile << "Kanopi's my Ai friend. He's growing fast and is going to be something really special one day! Already is to me :)\n";
	//Now we close the file. And the data is saved within.
	adamFile.close();
}

//Again, if you want to see the file with the sentence you just created go to the folder that contains this program and open it.
//Or the easy route which is to go to the top tool bar -> File -> Open -> File.