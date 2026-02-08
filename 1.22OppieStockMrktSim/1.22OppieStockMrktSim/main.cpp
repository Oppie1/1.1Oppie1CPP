#include <iostream>
#include <cmath>
using namespace std;


int main() {

	float a;//principle + rate
	float p = 10000; //principle
	float r = .01;//rate

	//This for loop stores the day that the program is on and then runs the expression to show how much money is made via the 
	//interest rate plus the principle. The for loop is critical in that we set the number of days that program will run (here 10)
	for (int day = 1; day <= 10; day++) {
		//So on the first day (day a =1) the condition day<=10 is true and so the program enters the codeblock, runs the expression
		//and the shows the information out to screen. The program will run one day at a time. At the end of the codeblock
		//after day 1 ----- money is shown to screen the program will increment by 1 (day++). So after the first day interest has
		//been compounded and shown to screen the next loop (day 2) will run. Once on day 11 -> 11< = 10 the condition is FALSE
		//and so the program stops. IMPORTANT NOTE. The loop runs and prints to screen on row at a time. It doesnt all print to 
		//screen at once. It may seem all info is printing out at once but that is not what's happening. It just seems that way
		//because how fast the program runs.

		a = p * pow(1 + r, day);
		cout << day << "-----" << a << endl;

	}
}

/*
Output:
1-----10100
2-----10201
3-----10303
4-----10406
5-----10510.1
6-----10615.2
7-----10721.4
8-----10828.6
9-----10936.9
10-----11046.2
*/