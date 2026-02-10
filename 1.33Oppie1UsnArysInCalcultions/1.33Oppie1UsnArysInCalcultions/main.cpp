#include <iostream>
using namespace std;


//In this lesson we will demonstrate taking an array and adding all of the numbers in the
//array together.

int main() {

	//First we initialize the array tuna to 5 elements (tuna[5 elements]. Again, an arrays have
	//"elements" (here int values) that have index locations. Here 0 - 4 which is 5 total elements
	//e.g., from below 5 would be at the 0 index location, 10 would be at index 1,15 at index 2 and so on.
	int tuna[5] = { 5,10,15,20,25 };
	//Below we use sum as our storage variable that will be set equal in the expression within the
	//for loop body sum = the total of all the elements added together in tuna.
	int sum = 0;

	cout << "Below is the total of an array with 5 elements added together each iteration.\n" << endl;
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
	for (int x = 0; x < 5; x++) {
		//Each time loop iterates this code in the code block { code } executes
		sum += tuna[x];

		//Here we just show what number/iteration we are on and display that to screen
		cout << x <<" ------ " << sum << endl;
		//Remember that for loop must fully execute (completely run its course) before going to next
		//step in program which here are just a couple of cout statements back in main()
	}
	//This is just notifying user that they are back in main(){ }
	cout << "\nCongratulations, you did it again! You made actionable code in a for loop and now" << endl;
	cout << "you are back in main(). Great job!" << endl;
}