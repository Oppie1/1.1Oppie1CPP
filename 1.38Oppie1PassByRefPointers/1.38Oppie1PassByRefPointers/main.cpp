#include <iostream>
using namespace std;

//This tutorial will focus on how pass by value only changes variable (here x) in the function itself
//but that change does not occur in main(). Where as in passByReference the value is changed within 
//main() and "returns" the value to the memory location and overwrite what is currently stored in
//the variable that was initialized in main. 
// 
// Key point: When we use "&" in main we are telling the computer to look at the memory address of the
// variable. In the prototypes we use "x" as a placeholder for the calls (calls arguments to be exact)
// in main. 
//-----------------------------------------------------------------

//Main "calls" passByValue(betty) = passByValue(int x) function which changes "betty" only in the function

void passByValue(int x);
// And when main "calls" passByReference(&sandy) = passByReference(int* x). What happens is "&" 
// declares to look at memory address and then the "*" points to that memory address and the function
// then is able to overwrite the current value that is there.
void passByReference(int* x);


int main() {
	
	//Here we declare two variables and set them to values.
	int betty = 13;
	int sandy = 17;

	cout << "Before the function calls betty = " << betty << " And sandy = " << sandy << "\n"<< endl;

	cout << "Now main calls to the outside (of main() program) functions and each executes (below)\n";
	cout << "Key note: Even though in code these are 'below main(). This takes place in middle\n";
	cout << "to correspond with the function calls, not the function definitions\n";
		
	//Here we call the passByValue function which executes and betty changes to 99 in the function
	passByValue(betty);
	//In this function call the same execution takes place and number changes to 66. The difference 
	//is that when control is returned to main the value of sandy has changed in main as well.
	passByReference(&sandy);

	//Here we demonstrate the impact of each logic on the values within main itself.
	cout << "\nThis is in main and shows the impact of functions on betty and sandy variable.s" << endl;
	cout << "\nbetty is now: " << betty << endl;
	cout << "sandy is now " << sandy << endl;
}

//This corresponds with the betty function call -> passByValue(betty)
//Remember that the function parameters (int x here) correspond to the call arguments (betty) in main
//Like a template in a way
void passByValue(int x) {
	x = 99;
	cout << "\nThis is the passByValue function outside of main. When main 'calls'\n";
	cout << "this runs/execute and show to screen I changed betty (x here) value only here to: \n";
	cout << x << endl;

}
//This corresponds with the sandy function call passByReference(&sandy). It runs/executes outside
//main as well but has the memory location of sandy and changes the value in the main program as well.
void passByReference(int* x) {
	*x = 66;

	cout << "\nThis is the passByReference function and when call executes which changes the value of\n";
	cout << "sandy (x here) to 66. The key difference is when control is returned to main sandy value\n";
	cout << "stays changed and will be 66 at that point. The value in the function is:\n";
	cout << *x << endl;
}