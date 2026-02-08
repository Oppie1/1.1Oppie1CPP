#include <iostream>
using namespace std;




int main()
{

	//Storage variables
	int x = 20;//Here x starts 20
	int a = 30;//Here a starts at 30
	int y = 10;//y starts at 10

	//Example of increment operator "++" (after or before variable) which means add by 1
	cout << "Example of increment operator that ++ happens after x -> x++ so x still = \n";
	cout << x++ << endl;//Output will be 20 since ++ (increment by 1) happens AFTER as the ++ signs are behind the variable (here x)
	cout << "Now the 'x' has been incremented in operation above x++ and so has increased by one:\n";
	cout << x << endl;//So now the output here will be 21

	cout << "\nThis example shows the increment (++) takes place BEFORE the variable a -> So a changes with cout statement output:\n";
	cout << ++a << endl;//This shows what happens when ++ happens BEFORE the variable and so the output will be 31
	cout << a << endl;//Here it just shows the same as above 31 since the increment has already happened and "a" has changed

	//Example below are using the modulus '%' operator
	cout << "\nThe modulus operator is '%' expression is saying divide by but only give the remainder - here we use a variable 'y'\n";
	cout << "But we can use a value alone (second example)\n";
	cout << "First example: y % 3 output is: " << y % 3 << endl;
	cout << "Second example:10 % 3: " << 10 % 3 << endl;
}