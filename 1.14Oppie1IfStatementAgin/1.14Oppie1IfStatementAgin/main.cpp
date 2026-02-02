#include <iostream>
using namespace std;



int main()
{
	int x = 11;//Here we set a variable (here x) to a value using the "=" operator
	int y = 43;//Here we set another variable (y) to a value. The value must match the data type
	//'int' data type-> (int = integer). *i.e. Here we declare and initialize another integer variable*

	if (x <= y) {
		cout << "Shown to screen when if statement is true. If false this cout would be skipped\n";
	}

	cout << "This is next step after 'if' codeblock\n";
	cout << "This will show by itself if 'if' statement is skipped " << endl;
	//Please go ahead an change 'x' and 'y' to see the changes to the output
	//Feel free to change the control condition (here <=) to see change in output as well.
	//could use <,>,==(equals),!=(does not equal)
}

//Bonus:
//Programmers often stack 'if' statements to show multiple output parameters.
//This stacked statements are referred to as blocks of code. They may test different
//things and produce different output. 
//Try adding a new 'if' block to see what happens!

//Remember that main(){     code blocks, variables and outputs - like cout statements - here
//is its own function.