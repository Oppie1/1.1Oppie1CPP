#pragma once


//We create a Birthday class to outline what we need to do to gather the birthday information,
//store that information in private storage and make a function to access that information.
//Remember that only functions of the same class have access to private storage.
class Birthday
{
public:
	//Here is the prototype that gets fed Birthday data from main()s arguments.
	Birthday(int m, int d, int y);
	//This function takes that information and prints it orderly to the screen. It is a "void"
	//so that actually takes place from here. It runs then gives control back to main.
	void printDate();

	//This is where the values/data from mains arguments are stored once initialized in the 
	//Birthday(int m,int d, int y) function definition.
private:
	int m_month;
	int m_day;
	int m_year;
};

