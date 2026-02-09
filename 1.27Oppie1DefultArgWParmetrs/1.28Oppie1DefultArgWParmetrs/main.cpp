#include <iostream>
using namespace std;


//This is the function prototype. We can have default parameters that will correspond to the arguments in main.
//Remember this will be "called" from main but the calculating takes place from the function definition (below main)
//This just notifies the program that a function exists to be defined at a later point.
int volume(int l = 1, int w = 1, int h = 1);


int main()
{
	cout << "Here are is the volume of two cubes via length(l) * width(w) * height(h):" << endl;
	cout << "The volume of the cube with arguments 3, 4, 2 (l*w*h) is:" << endl;
	//Here because function has values in its arguments we use those numbers to calculate the volume
	//By inputting values into the function we are overwriting the default parameter with arguments
	cout << volume(3, 4, 2);

	cout << "\n\nExample of using the default parameters in the function when argument does not contain any values:" << endl;
	//When the function is left blank (has no arguments) we use the default parameter's values to establish what will be calculated
	//within the function call in main.
	cout << volume();
	cout << "\n*The function prototype had '1' for l, w and h in its prototype so that is what was used for calculation" << endl;
}

//This is the function definition who's purpose in this program is to calculate the values provided in the call in main
//and return a value. Remember functions are like mini programs that provide main with information. So when you see
//volume(3,4,2) you take that and place the numbers within the function below (l*2*h) and return the answer in place of
//volume(3,4,2) from above. So when program runs the output will be 25 NOT volume(2,3,2)
int volume(int l, int w, int h) {
	//Again variables are like place holders for the actual data located in main.
	return l * w * h;
}