#include <iostream>
using namespace std;


//Demonstrates building a basic calculator

int main()

{//Brace at start of program (main function)

	//Declare int (integer) variables with no value
	//These variables (a,b and sum) are local memory storage. They are "local" in that
	//they are only accesible within main(){     Only accesible between main braces        }. So as user enters values 
	//those values are stored in these variables and can be used later (here to total the sum) 
	//When those two values are added together (like below expression) that answer is stored
	//in "int sum" which will be shown to screen later.

	int a; //Declaration of variable with no value ("garbage"/nothing value)
	int b;
	int sum; //Declare sum as an int data type

	cout << "------Basic Calculator!-----" << endl;
	cout << "Please enter a number: " << endl;
	cin >> a;//The user enters value which assigns a value to 'a'

	cout << "\nPlease enter another number: " << endl;
	cin >> b; //User enters another value which is assigned to int 'b' variable

	sum = a + b;//We assign the result of the expression a + b to sum.
	//Since we already declared "sum" to be an "int" we do not need to put "int" in front here.

	cout << "The sum of those numbers is: \n" << sum << endl;//Here we get the value that is stored
	//in int "sum" and out put it to the screen using cout.

	return 0;

}//Brace at end of program (main function)

//Key point: "Garbage" is simply whatever bits (1s and 0s) were left behind from that previous use. Could be anything from
//part of an old calculation, leftover data from another program or even random numbers like 48291 or -872634