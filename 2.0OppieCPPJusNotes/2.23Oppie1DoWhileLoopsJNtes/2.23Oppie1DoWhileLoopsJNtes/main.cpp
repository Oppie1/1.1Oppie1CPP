#include <iostream>
using namespace std;

//main reason why people want to make sure their code runs through at least one time
//probably most uncommon loop but some people prefer it over while loop
//basically "while" loop flipped upside down

int main()
{
	//This line of code only prints once because it is not within do code block

	//Create a cout statement that tells the user "make a program that counts to 10"
	//CODE:
	

	//Create/Declare an integer storage variable the will store/be initialized to a value (1 here).
	//Starting value (initialized) of x
	//CODE:
	

	//Create a do/while loop that will first display number(x) to screen and then increment by 1
	//CODE:
	

		//Create a cout statement that will print out x (which is 1 to start) to the screen.
		//CODE:
		

		//Increment x by one after 1 is printed to screen.
		//CODE:
		

		//So here the x value will be tested. Since it was incremented by 1 (x++) x in this condition will be 2. So while(2<10)? TRUE
		//and so the program will keep running and go back to top with int x = 2. It then enters the do{   } code block again and repeats
		//the cycle until x = 10 since 10 < 10? FALSE and so the program stops running. Again, programs are printing one row at a time. 
		//It may seem that it all prints at once because programs now days are extremely fast but its just one row at a time. The
		//variable, here x -> is set to a value at start of each iteration prints to screen then cycle repeats.
	
	//Create the while part of the do while loop that sets the control condition
	//CODE:
	

	//The following sentence only prints once as well since it is not within the do codeblock.
	//Create a sentence the say congratulations you instructed a computer to count to 10
	//CODE:
	
}
//Important Note: "while(x<10);" is just a function. So when you exit the "do{ action }" code block it comes to this function
//and executes to determine what to do next.

//KEY POINT: the "while is the "CONTROL" structure (the keyword that controls the loop's flow.
// x < 10 is the condition
//TOGETHER, while(x<10; acts as the "CONTROL CONDITION" -