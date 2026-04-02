#include <iostream>
using namespace std;


//In this tutorial we will be passing an array into a function. Below we will use a function prototype above the main
//program (int main(){code for main program}. We will define  this prototype below main. All define means is to have 
//code that will execute a certain task (a code block -> void prototype(parameters[]) {block of executable code}

//Create a void function called printArray prototype with the parameters of the array itself (int data type), 
//as well as an int variable for the size of the array.
//CODE:


int main() {

	//Create an integer array named adam with 3 elements -> 5, 10, 15
	//CODE:
	

	//Create an int array named claudia with 6 elements -> 10, 20, 30, 40, 50, 60.
	//CODE:
	

	cout << "The following is the result of the function printArray with parameters Claudia and 6" << endl;

	//Call the printArray function with arguments claudia (for array to pull from), and 6 (which corresponds to index location 5.)
	//CODE:
	

	cout << "The following is the result of the function printArray with parameters adam and 1" << endl;
	//Call the printArray function on the adam array and the index location of 1. Which will only print out 2 elements.
	//CODE:

}

//Remember when functions, like the definition below, are like mini programs that can be "called" from main(){ function calls here}
//to do something within the main program. This way we don't have to build the whole function within main. "main()" acts like the
//manager and can bring in different functions/code blocks to perform certain tasks in the main program. In this case of using
//a "void" data type main is literally just letting this function know to "run" it will perform its action outside of main and then
//the control will return to main. So when you see "theArray(claudia,6) that information feeds into the below definition like data
//feeding into a template. See this data lined up with the function prototype below. 

//Create a void function definition for the printArray function. Again, with parameters for integer array itself and
// a parameter for the size of the array itself that will be used in the for loop control to loop through elements.
//CODE:


	//So here the for loop once again is the loop counter. We use the size of the array (here 6 indices) to tell computer how many
	//times it should loop. Again, in an array the computer starts at the "0" index of the array. And so here will iterate (x++) 6 times
	//and then the control statement x < sizeOfArray -> 6 < 6? False. And the program stops.

//Create a for loop that will iterate over/through the indices. Initialize x to 0 (loop counter variable) Control to x less than 
//sizeOfArray variable. Iterate x by 1. Code block prints location and element value to screen (from function call arguments)
//CODE:
	

		//Remember this cout statement prints EACH time the loop iterates.
		//"theArray[x]" changes each iteration in this case when "x" changes to 0 ->theArray[0] the computer knows that it is at the
		//first index location which is 10. So every time we have an iteration in the loop counter it DOES matter for the other
		//parameter of the array. the x value in theArray[] parameter changes. So notice that the parameter theArray[] has empty
		//[] which is filled in with 'x' in the cout statement. This tells the computer what index location in is looking at and 
		//prints the number of that index location in the array to the screen.

		//Create a cout statement that will print the index number x and then the element itself via theArray variable @ [x]
		//CODE:
		


