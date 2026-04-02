#include <iostream>
using namespace std;


//In this lesson we will demonstrate taking an array and adding all of the numbers in the
//array together.

int main() {

	//First we initialize the array tuna to 5 elements (tuna[5 elements]. Again, an arrays have
	//"elements" (here int values) that have index locations. Here 0 - 4 which is 5 total elements
	//e.g., from below 5 would be at the 0 index location, 10 would be at index 1,15 at index 2 and so on.

	//Create/declare and integer array named tuna with 5 elements. Then set each index location = to a value (here: 5,10,15,20,25).
	//CODE:
	
	
	//Below we use sum as our storage variable that will be set equal in the expression within the
	//for loop body sum = the total of all the elements added together in tuna.

	//Declare an integer value named sum and initialize it to 0.
	//CODE:
	

	cout << "Below is the total of an array with 5 elements added together as it iterates through indices.\n" << endl;
	//We use the for loop as out loop counter which controls how many times the expression will
	//be executed. So first we start with x = 0 on first segment of array which is tested
	//in the second segment to determine whether array will execute information/expression in 
	//code block {  }. So is x < 5? True, and so the expression sum += tuna[x] -> 0 + 5 = 5 is performed
	//And so now the storage variable int sum now = 5. Then x++ from the loop counter iterates (x++). S0
	//x = 0 + 1. Both pieces of information is now printed to screen and control now returns to 
	//the for loop that will keep running in that matter until x = 5. At that point the control x < 5?
	//will be false and the for loop will exit.

	//IMPORTANT: Two math related things are occurring in the for loop. First which iteration/number 
	//of times the for loop has run and during EACH iteration the expression is calculated

	//Create for loop that declares value x and initializes it to 0. Then set control to x is less than 5 then iterate x by 1
	//CODE:
	
		
		//KEY POINT: tuna[x] itself is the location of indices AND the element value that exits there. 
		//In a cout statement -> first iteration(0 index) = 5, 2nd iteration (1 index) = 10, 3rd (2 index) = 15, etc.

		//Each time loop iterates this code in the code block { code } executes
		//Create an expression that adds the elements of the array together during each iteration and store the running total in sum.
		//CODE:
		

		//Here we just show what number/iteration we are on and display that to screen
		//Create a cout statement that shows which iteration x program is on and the running total of sum to the screen:
		//CODE:
		

		//Remember that for loop must fully execute (completely run its course) before going to next
		//step in program which here are just a couple of cout statements back in main()
	
	//The for loop has completed and control now continues with the next statements in main()
	//Create a cout statement to let the user know the for loop has fully executed and that control returns to the next
	//statement in main() -> See key point at bottom for more clarity.
	//CODE:

	
}

//KEY POINT:
//The for loop exists within main and so the control returns to the next step within main().
//When for loop completes:
//The for loop completes and control returns to the next statement in main()
//--This emphasizes that control flow sequentially withing the same function.
//OR: Execution exits the for loop and proceeds to the next statement.
//OR: The for loop terminates and the program continues with the next line in main.