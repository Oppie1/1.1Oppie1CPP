#include<iostream>
using namespace std;



//Hello world program. Demonstrates printing to screen

int main() {

	cout << "Hello world." << endl;//Standard way to print info to screen in C++. Use endl; to go to new line
	cout << "Hello moon.\n";//Can also use \n to go to new line
	cout << "Hello sun. " << "Hello you.";//Can also just keep things on one line like this

	return 0;//This means your program finished with "0" errors. Succesful program.
}

//If you want to test a codeblock inside your main program (which is like a all encoumpacing code block
//with smaller code blocks inside) you can "return 1" in the body of main() {test other codeblocks
// here with return 1}. Always use "return 0" at end of main - if the program runs then you know you have 
//"0" errors!