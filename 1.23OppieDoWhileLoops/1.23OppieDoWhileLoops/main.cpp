#include <iostream>
using namespace std;

//main reason why people want to make sure their code runs through at least one time
//probably most uncommon loop but some people prefer it over while loop
//basically "while" loop flipped upside down

int main()
{
	//This line of code only prints once because it is not within do code block
	cout << "Make program that counts to 10 " << endl;

	int x = 1;//Starting value (initialized) of x

	do {
		//Here we are saying print out x (which is 1) to the screen.
		cout << x << endl;
		//Once 1 is printed to the screen we increment it by 1 and then go to next part of code which here is the while condition.
		x++;

	} 
	//So here the x value will be tested. Since it was incremented by 1 (x++) x in this condition will be 2. So while(2<10)? TRUE
	//and so the program will keep running and go back to top with int x = 2. It then enters the do{   } code block again and repeats
	//the cycle until x = 10 since 10 < 10? FALSE and so the program stops running. Again, programs are printing one row at a time. 
	//It may seem that it all prints at once because programs now days are extremely fast but its just one row at a time. The
	//variable, here x -> is set to a value at start of each iteration prints to screen then cycle repeats.
	while (x < 10);

	//The following sentence only prints once as well since it is not within the do codeblock.
	cout << "\nCongrats! You instructed computer to count to 10!" << endl;

}

//Important Note: "while(x<10);" is just a function. So when you exit the "do{ action }" code block it comes to this function
//and executes to determine what to do next.