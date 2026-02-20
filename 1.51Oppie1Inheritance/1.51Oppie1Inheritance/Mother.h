#pragma once


//Create a Mother class (here base class). A template for the .cpp file to go from.
//The derived class has access to this header and its member variables and its member functions.

class Mother
{
public:

	//Son has access to these variables in the same way Mother does. They can be called from main using a Son
	//object. As a derived class a Son object still needs to have at least a constructor to constain whatever
	//data it gets from Mother. Son/derived class makes an empty box that can be filled with the Mothers stuff.
	//These member variables can be pulled into main basically operate as variables would at the top of the page
	//int the main(){} file. By having separate files we keep things nice and organized. It's all just about linking
	// the files together properly. The .h files at the top are just the start of that!
	int age = 11;
	int age2 = 23;
	
	//Here we have the mother constructor. She builds an empty box when an object is called in main.
	//The runs and the main gets an empty box/object that can hold functions and variables.
	Mother();
	//This is is a function prototype that when main calls it runs. It is defined in the Mother.cpp file.
	// Since it is a void it actually runs outside of the main program and then returns control to main.
	void sayName();

};

