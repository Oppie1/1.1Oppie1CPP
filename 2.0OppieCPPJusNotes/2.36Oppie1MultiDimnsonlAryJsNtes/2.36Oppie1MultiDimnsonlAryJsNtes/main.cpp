#include <iostream>
using namespace std;


//In this tutorial we will create a multi dimensional array. We will then take those numbers and use 2 for 
//loops one nested within the other to create a table with 2 rows and three columns and display them to the screen

int main() {

	//So again [2] -> number of rows. We use two braces each signifying a row { row 1 (0 index) } , { row 2 (1 index) }
	//Then we use [3] -> number of columns which means how may elements in each row. We have three numbers so we have
	//three elements meaning we have three columns total {element 1, element 2, element 3} -> {column 1(0), column 2(0), column 3(0)}
	//*We don't have 6 elements you only count what is is EACH row. Row 1(0) -> {3 columns} Row 2 -> {3 columns} 

	//Create a bertha array with 2 rows and 3 columns. -> 3, 4, 5 and 7, 8, 9
	//CODE:


	//This is the outer loop. It runs first but then has to wait for nested "column" loop and print statement prior to 
	//exiting the nested fully executed for loop to next part of code within the codeblock of "row" for loop. Which is
	//to print another line. Once that line is printed the first for loop goes back to iteration (3rd part) of for 
	//loop and then back to next initialization and control (row < 1) -> execute nested 
	//code block (for loop)  again. After inside loop prints out 3 numbers to the screen this for loop will progress

	//Create a cout statement that says "This is the bertha multidimensional array" -> Essentially a matrix!
	//CODE:


	//Create a for loop and declare an int as "row" initialized to 0 as loop counter, control less than 2 and iterates row by 1.
	//CODE:


		//This for loop will scroll through EACH column of the first row {row 1} -> and print {3,4,5} to screen one digit at a time
		//Create a second NESTED for loop that is declared column initialized to 0, control less than 3. iterates by 1  
		//CODE:


			//So on first pass we will have [row 1] -> {3, ?, ?} 
			//On second pass we will have [row 1] -> {3, 4, ?}
			//Third pass [row 1] -> {7, 8, 9}
			//On forth pass the loop will fail because 3 < 3? False.
			//Now the program exits this inner for loop and falls back into the outer loop that prints another line (endl)
			//And goes to the iteration step of the outer for loop, initializes that number to row = 1 and then goes to middle
			//section/control portion of the loop (row < 2?) -> 1 < 2? True, proceed to inner/nested for loop and print
			//the elements in {row 2} -> {7, 8, 9}. //"  " just a space after each number

//Create a cout statement within the nested column that prints the elements (values at index locations). No extra line needed in column
//cout row AND columns as the column for loop exectues. Should have space between each element. Must fully Execute nested loop.
		//CODE:	


		//Create a statement that prints a line in between the first and second rows. You're still in the for loop! Must fully execute.
		//CODE:


//Create a line of code that says that say that control has returned to the next statement in main(). 
//CODE:

}
//Output:
//3 4 5
//7 8 9