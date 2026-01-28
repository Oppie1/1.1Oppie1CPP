#include<iostream>
using namespace std;


int main()
{
	int tuna = 99; //Here we set the int varible to 99 (declaration)
	//This value is stored in memory.
	cout << "tuna before reassignment: \n" << tuna << endl;

	tuna = 76;//That variable can be overwritten like this. We also dont need to put data type
	//in front of variable as it has already been declared an int previously in program.
	//if you were to put the data type in front again (like this int tuna) you would get an error
	//(redeclaration/multiple initialization) and program will not run/execute

	cout << "Below we cout tuna variable 76 (tuna=76) that overwrites the initial\n";
	cout << "declaration of 99 (int tuna = 99)\n" << endl;
	cout << "tuna now (after reassignment - variables hold their last assigned value): \n" << tuna << endl;

	return 0;
}