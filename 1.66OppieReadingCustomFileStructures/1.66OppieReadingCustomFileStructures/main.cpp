#include <iostream>
#include <fstream>//Need when dealing with input file streams (pulling info from file)
using namespace std;

//Reading files out to screen requires first a file to pull from so create a text file in notepad
//and input data that would correspond to the variables listed in the backend of this program. Then
//save that file to the folder that holds this program/program files. Must be the output folder
//which is basically what opens when you first click on the main 1.66OppieReadingCustomeFileStructures folder.

int main() {

	//Here we create and adamFile object with parameter to look for the molts text file in order to
	//work within that file.
	ifstream adamFile("molts.txt");

	//These variables will have corresponding values within the file. These will store that information
	//which will later be printed to the screen.
	int id;
	string name;
	double money;

	//This line tells the object to look to a particular part/variable of the open molts file and to retrieve 
	//the information contained in those variables. It will run and continue to make passes through the
	//file each time printing a new line of information to the screen. So if there are three people, the
	//program will scroll through three lines of info in the file.
	while (adamFile >> id >> name >> money) {

	//Then we format a cout statement to coherently print the information to screen. This cout
//statement need to follow the same logic as was the case in the molts.txt file to fit the data appropriately.
	cout << id << " ," << name << " ," << money << endl;

	}
}