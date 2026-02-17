#pragma once


//Programmers may find it helpful to treat this as an outline (like writing an essay) and copy  this into the .cpp file and
//make the necessary adjustments (such as putting the class - here Claudia before each function) and other minor adjustments
//in the .cpp file so the program runs smoothly. -> table of contents segment 1 -> segment 2 ->

//Essay correlation -> Some people find it helpful to write title -> intro -> segment 3 -> conclusion -> index, ect.
// With appropriate titles/headings for each segment/ to screen of course) - Then gradually fill in the actual contents of paper.


//First we make a class for all of our functions and variables
class Claudia
{

public:
	
	//This is a constructor with integer (int) parameters a and b. Just means arguments must pass in integer or program will fail.
	Claudia(int a, int b);
	//This is a simple void function that prints the variables (located in private below) to the screen. Those variables get 
	//that data from the arguments in main. Here is the flow -> main cv(3,87)->Claudia(int a, int b)-> private ->int regVar and
	//const int constVar - print to screen function below -> return control to main. Again, because void performs ACTION outside of main.
	void printInitlzdVarToScrn();

private:
	//These are storage variables that will hold the values that are passed in from main (after passed into constructor)
	int regVar;
	const int constVar;

};

