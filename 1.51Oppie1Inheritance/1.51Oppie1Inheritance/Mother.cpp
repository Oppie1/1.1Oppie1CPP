#include <iostream>
#include "Mother.h"
#include "Son.h"
using namespace std;


//This runs when an object is created. It is the constructor and creates an empty box {  } that will be filled as 
// function calls are made.
//Remember the flow -> Mother(class) "::" look in class for -> Mother(empty box)
Mother::Mother()
{

}

//Remember the flow here -> main calls sayName -> it runs this function -> Mother(class) -> sayName(function){prints sentence to screen} 
void Mother::sayName() {

	cout << "My name is Arlo, wait no it's not it is ";
}
