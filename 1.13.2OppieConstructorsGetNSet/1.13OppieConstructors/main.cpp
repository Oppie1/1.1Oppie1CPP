#include <iostream>
#include <string>
using namespace std;



//This tutorial focuses on using getters and setters to initialize constructors and access data in the private access specifier (private:)
//We can only private: data within the class. Main can't just call a a value contained in a variable (local storage) that is in private.
//We must use getters and setters which is logic (not keywords) to first set the information from the user input from the arguments and
//use its matching constructor/function(with parameter) located in the OppieClass1 and "set"" what is in that private variable. Then we will use
// the "get" logic to access the private variable (here parameter sentence) and show it to screen. It also demonstrates that functions can
//call other functions within the class. In this example a constructor "calls" another function.

//"string" is a variable = sentence 

class OppieClass1 {

public:

	OppieClass1(string z) {//We will use this constructor that matches the object. (In-> main(){OppieClass1 oppieObject1(argument)

		setParameterSentence(z);//This takes that information and calls a function within this class. Again, when we say "call" the computer
		//is asking the other function to execute. It takes the information gained in main(){ oppieObject1("Example of constructor...")
		//(z is just a placeholder for that sentence when it calls to the void function below. Its just the sentence we just got from main

	}

	void setParameterSentence(string x) {//This executes because it was called from the constructor above. 

		parameterSentence = x; //All this function does is take "x" (sentence from argument in main and store it in private: string parameterSentence0
	}

	string getParameterSentence() {//This function is directly called from main as it exists in the public: portion of this class (OppieClass1)
		
		return parameterSentence;//Its sole purpose is to return "parameterSentence" from the class (stored in local variable in private) to main call
		//via oppieObject1.getParameterSentence(); -> the "answer" to a function -> here getParameterSentence() IS the return value from the function
		//that is executed.
	}

private:

	string parameterSentence;//Local private variable that can ONLY be acessed within the class it belongs to
};


int main()
{
	
	cout << "\n-----  getters and setters along with constructors------\n\n";

	OppieClass1 oppieObject1("Example of constructor and accessing private data with getter and setter!");//This "call" sends info to class constructor
	cout << oppieObject1.getParameterSentence();//This "calls" the getParameterFunction() which executes and returns the sentence stored in the private:
	//access specifier. "return" parameterSentence = getParameter Sentence
	cout << endl;
	
	//cout << "\n\n-------And the second constructor-------\n" << endl;

	//OppieClass1 oppieObject2("I am the second objects constructor!");
	//cout << oppieObject1.getName();

}