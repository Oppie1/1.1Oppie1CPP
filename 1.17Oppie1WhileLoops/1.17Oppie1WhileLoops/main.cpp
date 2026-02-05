#include <iostream>
using namespace std;



//The while loop "runs" from top to bottom and back to top so long as "while" this is happening (here "<" test).

int main()
{

	int page = 0;//Here we start by initializing page to 0 before we enter the while loop code block/

	//Here we test is 0 less than 20? Yes it is so go to next step in code which is to execute cout statement, after than we go to next action
	//in code block. The "code block" is just whatever is inside the curly braces following while -> while(){ do this action }
	while (page < 20) {

		//So after while we cout this statement to screen -> page is: 0 (value are start "initialized")
		cout << "pages is: " << page << endl;

	//Now we go to next step within the codeblock which is to add "3" to the initial value "0" 
		page = page + 3; //So here we are just saying 0 (page) = 0 + 3 -> So now page = 3
	//Now we go to next step. There are no more steps to cover so we must go back to top and run while loop again until the condition (page<20) is 
	//true. Each time we get to this point "page" increments by 3 (increases by 3) and goes back to top with new value for page.
	// e.g. At start of second loop -> page now = 3 so  while(3<20) -> next loop page = 6 while(6<20) and so on until page = 21 while(21<20)FALSE/STOP
	//IMPORTANT: the while loop must fully execute prior to going onto next code block
	}

	//So the while loop runs its course going from the top to the bottom and back to the top to be tested and then falls into next code block
	//which here is the codeblock that is the main() function/program
	cout << "\nWhen the while loop fully executes you see this statement. That is why it's below all the other information that printed\n";
	cout << "over course of entire while loop. Fully executes just means condition is false i.e. page is not less than (<) 20 -> 21+" << endl;

}