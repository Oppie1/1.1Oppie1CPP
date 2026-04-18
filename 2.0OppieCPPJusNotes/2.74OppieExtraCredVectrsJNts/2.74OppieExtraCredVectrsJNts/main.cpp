#include<iostream>
#include <vector>
using namespace std;


//Vectors are dynamic arrays in that they don't have to be a fixed/static number of elements. 

int main() {

	//Even when you declare a size you can still manipulate (add, take, insert, erase,ect.) it.
	//Here we create an empty vector while specifying the size here. Here the size is 5 elements with no value (hint).


	cout << "How empty vectors work - use a for loop and cout the vector to the screen. Should be 5 0 values." << endl;
	//Instantiate a vector object named emptyVector with size 5. Each element is value-initialized to 0 by default.
	//CODE:
	
	
	//Add cout statement that to call the size() function on the emptyVector (object)
	//CODE:
	

	//Demonstrate that emptyVector contains 5 elements initialized to 0 by using a for loop with int i initialized to 0, i < emptyVector and size function. 
	//Iterate by 1 and show a cout statement to the screen iteration through each index location and printing all elements to the screen on one line.
	//CODE


	//Here we have 5 vector arrays. A key point: We can operate on the same array multiple times manipulating it with different
	//functions and actions the will effect how many elements it has. It's size is dynamic. Can adjust number of elements/indexes 

	//Instantiate a vector named happyVector that contains 3 elements {} 4,5,6. Elements are of type int -> vector class <type>
	//CODE:
	


	//Instantiate a vector named happyVector2 that contains 3 elements 7,8,9. Elements are of type int. -> at beginning vector class <int>
	//CODE:

	
	//We do not use this array. Feel free to try to change the push_back() example to this vector (happyVector3). To see what happens.
	//Instantiate a vector named happyVector3 that contains 3 elements 11, 12, 13. Elements are of type int so must clarify that <int> at beginning
	//CODE:
	

	//Instantiate a vector named happyVector4 that contains 3 elements 14, 15, 16. Elements are of type int of the vector class <>
	//CODE:
	

	//Instantiate a vector named happyVector5 that contains 3 elements 21, 22, 23. Elements are of type int of vector <> class
	//CODE:


	//Here we create an int variable and set it to happy vector with a size of 2 (3 elements total)
	cout << "\n\nDemo of assigning an int object to a specific index within the vector. happyVector[2] is: " << endl;
	//Access the element at index 2 from happyVector and store it in int vectorElem (assign int vector to....) []
	//CODE:
	
	
	//Add a cout statement to show vectorElm/happyVector[2] to screen. Will be a 6.
	//CODE:
	

	//Create a for loop to scroll through the whole vector iterating over each element in the array. There will be 3 total
	//iterations the first will print out 1 to screen, second iteration will print out 2 and the third iteration will print out 3

	cout << "\n\nPrint full happyVector array to screen: " << endl;
	//Declare a for loop that initializes i to 0 (int data type), sets i to less than happyVector object called upon by function size() and increment by 1.
	//Code block executes printing out the contents of the happyVector on the SAME line through a cout statement and...
	//CODE:
	

		//This accesses the happyVector "i" is just an index location placeholder as well as the element/value which will print to screen.
		//CODE:
		

	cout << "\n\nPrint with replacement value for happyVector 7,8,9 with 22 replacing the second element (index location 1)" << endl;

	cout << "Display happyVector2[1] then run a line that does the replacement. Current happyVector[1] is: " << endl;
	
	//Add cout statement to display happyVector2[1] OG to screen
	//CODE:
	

	//Replace an element/value by setting the index location you want (1 here) to change to a new value. Here 22.
	
	//CODE:
	

	cout << "\nNow the the replacement happyVector[1] should be 22 if you did it right: " << endl;
	//CODE:
	

//Again, this is a loop to scroll through the whole vector iterating over each element in the array.
//The first iteration from happyVector2 array will be overwritten by "6" so instead of "7" printing out in first position it will be 6

	cout << "Now to show how this replacement impacts the happyVector2 vector as a whole\n" << endl;

	//Declare a for loop initializing integer i to 0, with i less than the size of the vector happyVector2 .size with not parameters. Iterate i by one.
	//Add a cout statement that prints the element at each index location to the screen with each on a NEW line.
	//CODE:


		//So again when you see "i" it is just saying the index location which is assigned to a value.
		//CODE:
	
	cout << "\n\nPrint with push_back() function" << endl;

	//This demonstrates two things. First we use the push_back() to add a value/index location to the array we are dealing with.
	//Secondly this shows that we can operate/manipulate the same vector (here happyVector2) however we wish. We dont need 
	//a "new" vector. That said it is operating AFTER the above manipulation. So it is NOT the exactly the original
	
	//Declare a push_back function with an argument of 10 on the happyVector2 object.
	//CODE:
	

	//So again we start at 0 in first iteration and so long as i (index location) is less that the size of the happyVector2 array
	//which is 2 (3 index locations - 0,1,2) the for loop will keep running. Because we used the push_back() another element
//is placed at the end when the for loop finishes its execution. The push_back() is in addition of element NOT another iteration of the for loop.

	//Declare a for loop with integer i instantiated to 0 (That should be intuitive at this point since i is a number the object i is of the int class
	//These are standard classes at the header. You're just saying what th object i is equal to. Set i to be less than happyVector2 size (use . and size
	//function with no parameters. Then iterate i by one.
	//CODE:
	

		//Add a cout statement the prints the value of the element at index i of the happyVector2 vector to the screen on SAME line.
		//CODE:
	

	//The pop back works in a similar fashion but the difference is that it automatically eliminates the last element in the given array.
	//Once again the pop_back function takes place before the for loop even runs and eliminates the value at the last location of vector.

	//Declare the pop_back() function with no parameters on the happyVector4 vector object.
	//CODE:


	//Declare a for loop that starts i at 0, where i is less than the happyVector4 total size (no parameters), and iterate by 1 after each execution of for loop.
	//CODE:
	

		//Add a cout statement that prints out the current index location of the happyVector4 vector element on DIFFERENT lines.
		//CODE:
		

	cout << "\nPrint with erase function\n" << endl;
	//The erase function allows programmer to eliminate a index location and therefore the value/element at that index location prior
	//to the for loop running. So here we eliminate the 2nd position in the array (22) 

	//Declare an erase() function(vector . function) for the happyVector5 vector calling arguments -> vector begin() function and add 1 since we are going to erase
	//the element at the second index location on the happyVector5 vector.
	//CODE:
	

	//Declare a for loop to print the happyVector5 to the screen exactly as you did the others to show the adjustment after the erase (22 - 2nd element) should be gone.
	//For cout statement print the new vector to the screen on the SAME line.
	//CODE:
	

		//CODE:


	cout << "\n\nPrint with insert function" << endl;

	//Again, this demonstrates 2 things. First it shows we can operate on the same array twice (although with new structure/elements/values)
	//Secondly, the insert() allows us to insert a value into the current vector. So here we start at the beginning() which is at the 0
	//position and add 1 (move one space over in index) and put the number 33 in that location.

	//Declare an insert() function with arguments -> vectorInQuestion, dot separator, begin() function with no parameters, +1 (move one post off 0 index, 
	//insert 33 into the on the happyVector5 vector/object
	//CODE:
	

	//Declare a for loop setting int object i = to 0, i<happyVector.size(), iterate i by 2 with a cout statement that iterates[i] over the index locations 
	//of the vectors elements prints the array on the SAME line.
	//CODE:


		//CODE:
	

	cout << "\n\nOr using the range based loop method. " << endl;

	//This for loop just takes the a variable (int here) and sets it equal to the entire vector ":" basically saying "go to"
	//the happy vector variable.

	//Declare a range-base for loop that iterates through each element for happyVector. The loop variable curElm is automatically assigned the value of 
	//each element on every iteration int curElm : given vector
	//CODE:
	

}
