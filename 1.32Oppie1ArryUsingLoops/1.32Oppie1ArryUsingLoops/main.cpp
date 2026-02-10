#include <iostream>
using namespace std;


//This tutorial demonstrates taking an array of 9 elements and displaying the elements from that
//array to the screen. Here we take th array[x] and assign the elements to the array to values
//within the for loop. So each element in the adamArray to 99 (adamArray[99]) which makes each
//element in the array to 99 (0-8) again computers count from 0. So 0-8 = 9 elements


int main()
{

	int adamArray[9];//This creates 9 indices in the int array. 

	cout << "Element - Value" << endl;//This creates the heading for our array

	//The following demonstrates we can use the variable "x" to produce the corresponding values in the 
	//for loop 0-8 - and the value of "x" array at same time. Computer knows we're talking about two different 
	//values for x.
	for (int x = 0; x <= 8; x++) {
		//So on first iteration initialize in the first section (of 3) -> for(initialize section, test, increment)   
		//x = 0, 0<=8? True, execute code block (set [x] to 99 -> cout number we are dealing with 0-9 with corresponding
		//value here 99 to screen (the cout statement below executes 9 times) 0 -------- 99, 1 ------- 99, 2 ------- 99, ect.
		//Once x = 9 the loop stops and we go back into main function.
		adamArray[x] = 99;

		cout << x <<" ------ "<<adamArray[x] << endl;
	}

	cout << "\nCongratulations! you have set each element of the adamArray to 99. You are now back in main()" << endl;

	cout << "\n---Important Note---" << endl;
	cout << "Again, this is the last thing that happens but often programmers will continue with other code/code blocks" << endl;
	cout << "Here to build out a larger program. We often start small and stack code/code blocks breaking up large amounts" << endl;
	cout << "in main into different sections to make things easier" << endl;
}