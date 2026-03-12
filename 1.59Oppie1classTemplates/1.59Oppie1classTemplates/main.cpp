#include <iostream>
using namespace std;

//In function templates we create class templates that can work with multiple pieces of information at once
//It allows an object to use the same function with different data types.

//Here is an example of a template class. You MUST use the keyword "template" with angle bracket <  >
//syntax or the program will not work.  You're functionally creating a class of a class to deal with 
//different types of data.
template<class T>

//So here the Adam class is a member of the T class.
class Adam {
	//Here we tell computer the the members first and second are members of the Adam class but
	//have the data type of the template class T. These are storage variables whos information will 
	//be used when the template<class> is defined below.
	T first, second;

	//Here we set the parameters of the Adam class and initialize the variables to type T
public:Adam(T a, T b) {
	//We set the the parameters a and b to first and second effectively initializing the variables
	//which will be used in template definition below.
	first = a;
	second = b;
}
	  //This is the function prototype. It just lets the computer know that there is a function that
	  //will be defined later. This member function stores  the outcome of that function and when
	  //called will execute and return the value to main.
	  T bigger();
};

//Below is the function template class definition.
template <class T>
//This is the proper syntax necessary for the function. It states:
// "T" (return type) ->  in the "Adam" class -> using <T> (template) -> :: (access and run) -> member 
//function "bigger() and return answer to the function to the caller (here main)"
T Adam<T>::bigger() {
	//This is what is returned to main (caller) and replaces "bigger()" 
	//Just says if first is larger than second return firt. If not (else) return second (terinary operator)
	return(first > second ? first : second);
}

int main() {

	//Here we are creating an object from the Adam class. We notify the computer with <  > that we are
	//dealing with a double. ato = object
	Adam<double> ato(3.14, 6.28);
	//ato(object) .(+) bigger() gives us the output in the desired data type. So 6.28 (includes decimal)
	cout << ato.bigger();
	
	//object of the Adam class. Notifies computer with <  > that we are dealing with an int. ato2=object
	Adam<int> ato2(22.3, 7);
	//ato2(object .(+) bigger gives us the output in the desired data type. So 22 (no decimal - truncated)
	cout <<"\n"<< ato2.bigger();
}