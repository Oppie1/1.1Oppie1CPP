#include <iostream>
#include <fstream>
using namespace std;


int main() {

	cout<<"---First example is of a file that opens correctly and therefore can be written to\n" << endl;
	//So when an object is created from the ofstream class and we use a file as a parameter as shown in line below
	//The computer creates (or overwrites) the file in the programs output folder. You can check this out for yourself after
	// you run the code. For the first message it will be attached to an actual file which you can locate.
	//File -> open -> file -> locate file labeled Kanopi and open it. You should see the statement " This is what... " (below)
	//printed within that file.

	ofstream adamFile("Kanopi.txt");

	if (adamFile.is_open()) {
		cout << "The file opened successfully." << endl;
	}
	else {
		cout << "The file did not open correctly." << endl;
	}

	//This statement will print to the Kanopi.txt file.
	adamFile << " This is what is written to the file when it opens correctly when if statement is true.\n";

	adamFile.close();


	cout << "\n---Example where file does not open and there for cannot be written to---\n" << endl;
	//So here the path does not exist and so Kanopi2.txt cannot save as it is not a relative path, so it resolves inside the 
	//current working directory (typically the project's output folder -> /1.65OppieTipsForFilHandling (implicit when object is created)
	ofstream adamFile2("DoesNotExist/Kanopi2.txt");


	if (adamFile2.is_open()) {
		cout << "The file opened successfully." << endl;
	}
	else {
		//So you see this to screen and tells the programmer that the file isnt created/opened so there is nothing to write to.
		cout << "The file did not open correctly." << endl;
	}
	//There is no file so this cannot write to one that is not there (obviously)
	adamFile2 << " This is what is written to the file when it opens correctly when if statement is true.\n";

	adamFile2.close();
}

//Check for Kanopi2 file in File -> open -> file -> No kanopi2 was created.

//Key points: 
// When you use "DoesNotExist/Kanopi.txt" you're asking the OS to create a file inside the subfolder within the program file
// that is int there (DoesNotExist is the subfolder that's not there). The open fails, adamFile.is_open() returns false and the
// else branch runs.
// It is good practice for programmers to use "is_open" to make sure your actually doing something within the file.
