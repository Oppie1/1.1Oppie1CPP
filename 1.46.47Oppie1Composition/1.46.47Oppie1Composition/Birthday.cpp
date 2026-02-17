#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;


//When this runs it takes the values in the arguments from main, initializes them, then stores that
//data in private: in header. Remember, only member functions have access to the private variables
//and therefore the values/data they store
Birthday::Birthday(int m, int d, int y) {
	//Again, we use "m_" before the variable as it make it more readable. All it means is that 
	//this is initialized as a member function of the birthday class.
	m_month = m;
	m_day = d;
	m_year = y;

}

//This function is called from a function located in another class (People)
//It's exactly like we call things from main. The function from the People class calls this function
//of the Birthday class. It runs, prints an sentence printing the data in an organized fashion to the
//screen then control is returned to main.
void Birthday::printDate() {

	cout << m_month << "/" << m_day << "/" << m_year << endl;
}