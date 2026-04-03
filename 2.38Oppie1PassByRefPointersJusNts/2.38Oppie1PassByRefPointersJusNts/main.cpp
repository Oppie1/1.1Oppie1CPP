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

//Create a void function passByValue with an integer variable parameter.
//CODE:
void passByValue(int x);

// And when main "calls" passByReference(&sandy) = passByReference(int* x). What happens is "&" 
// declares to look at memory address and then the "*" points to that memory address and the function
// then is able to overwrite the current value that is there.
// 
//Create a void function passByReference with an int pointer variable as its parameter.
//CODE:
void passByReference(int* x);

int main() {

	//Here we declare two variables and set them to values.
	//Declare two variables betty and sandy and initialize each to 13 and 17 respectively
	//CODE:
	int betty = 13;
	int sandy = 17;

	//Create a cout statement that shows the value of each variable.
	//CODE:
	cout << "The value of betty before the function call is: " << betty << endl;
	cout << "The value of sandy before the function call is: " << sandy << endl;

	cout << "\nNow main calls to the outside (of main() program) functions and each executes (below)\n";
	cout << "Key note: Even though in code these are 'below main(). This takes place in middle\n";
	cout << "to correspond with the function calls, not the function definitions\n";

	//Here we call the passByValue function which executes and betty changes to 99 in the function
	//Make a function call passByValue with the parameter betty
	//Call passByValue function with parameter betty.
	//CODE:
	passByValue(betty);
	
	//In this function call the same execution takes place and number changes to 66. The difference 
	//is that when control is returned to main the value of sandy has changed in main as well.
	//Make a function call passByReference with the parameter of the memory address of sandy.
	//CODE:
	passByReference(&sandy);

	//Here we demonstrate the impact of each logic on the values within main itself.
	cout << "\nThis is in main and shows the impact of functions on betty and sandy variables" << endl;
	
	//Create a cout statement that betty has only changed in the function. NOT in main: 
	//CODE:
	cout << "Betty value has not changed. The new value is. " << betty << endl;

	//Write a cout statement that sandy has changed and then display the sandy variable
	//CODE:
	cout << "Sandy value has changed here in main AND in function. So her in main the value is now: " << sandy << endl;


}

//This corresponds with the betty function call -> passByValue(betty)
//Remember that the function parameters (int x here) correspond to the call arguments (betty) in main
//Like a template in a way.
//Define the function void pass by value and set x = 99.
//CODE:
void passByValue(int x) {

	//Declare int variable x and initialize it to 99.
	//CODE:
	x = 99;

	cout << "\nThis is the passByValue function outside of main. When main 'calls'\n";
	cout << "this runs/execute and show to screen I changed betty (x here) value only here to: \n";
	//Make a cout statement that displays the x value to the screen.
	//CODE:
	cout << x << endl;
}
//This corresponds with the sandy function call passByReference(&sandy). It runs/executes outside
//main as well but has the memory location of sandy and changes the value in the main program as well.

//Define the passByReference function with int pointer variable as its parameter.
//CODE:
void passByReference(int* x){
	//Declare a pointer variable and set it equal to 66
	//CODE:
	 *x = 66;

	cout << "\nThis is the passByReference function and when call executes which changes the value of\n";
	cout << "sandy (x here) to 66. The key difference is when control is returned to main sandy value\n";
	cout << "stays changed and will be 66 at that point. The value in the function is:\n";

	//Add a cout statement that display the pointer variable to the screen.
	//CODE:
	cout << *x << endl;

}

//KEY POINTS/TERMINAOLGY:
//Declare = function prototype/function signature before main -> void passByValue(int x)
//Define = Writing the function body -> void passByValue(int x){...}
//Call/Invoke = Executing the function within code -> passByValue(betty);

//"Make a function call" is perfectly natural and understood, but the formal technical writing, "call" or "invoke" are prefered verbs.

//For cout statements the vocabulary is more relaxed and can say create, make, add cout statement since its lifecycle is different.
//Thank functions (declare -> define -> call).