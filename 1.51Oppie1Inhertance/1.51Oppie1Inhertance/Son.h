#pragma once


//So here we create the Son class which is the derived class of Mother. Mother is the base class and 
//so the Son can make use of the functions and variables of the Mother class.
class Son : public Mother
{
public:
	//So we still need to create a "Son" constructor the will make and object that the mother
	//functions can operate in/on. The Son object "owns" the mother functions.
	//Remember each object is its own separate entity. Each is built from classes blueprint
	//and operates as such.
	Son();
};

