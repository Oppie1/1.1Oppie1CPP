#include <iostream>
#include <cmath>
using namespace std;


//Tutorial: Stock market simulator

int main() {

	cout << "Welcome to the stock market simulator. You have $1000 with an interest rate of 10% " << endl;

	//Create 3 float  variables that will be used in the stock market simulator to store information.
	
	//principle + rate variable.
	//CODE:


	//Principle -> Just use 1000 so easy to track if it's correct.
	//CODE:
	

	//Rate variable. Just use 10%/.1
	//CODE:
	

	

	//This for loop stores the day that the program is on and then runs the expression to show how much money is made via the 
	//interest rate plus the principle. The for loop is critical in that we set the number of days that program will run (here 10)

	//Create a for loop that loop through each day so long as the day is less than or equal 10 by one day at a time.
	//CODE:
	
	
		//So on the first day (day a =1) the condition day<=10 is true and so the program enters the codeblock, runs the expression
		//and the shows the information out to screen. The program will run one day at a time. At the end of the codeblock
		//after day 1 ----- money is shown to screen the program will increment by 1 (day++). So after the first day interest has
		//been compounded and shown to screen the next loop (day 2) will run. Once on day 11 -> 11< = 10 the condition is FALSE
		//and so the program stops. IMPORTANT NOTE. The loop runs and prints to screen on row at a time. It doesnt all print to 
		//screen at once. It may seem all info is printing out at once but that is not what's happening. It just seems that way
		//because how fast the program runs.
		
		//Given -> This is thr formula to calculate interest on the principle.
		//CODE:
		

		//Create a statement that tracks the day we are on that corresponds to the principles value on that day.
		//CODE:
		

	//Create a statement that prints to screen after the for loop has fully executed. It should notify user that the loop executed
	//until day 11 when control failed and should also display the average dollar value accrued per day.
	//CODE:
	

}
