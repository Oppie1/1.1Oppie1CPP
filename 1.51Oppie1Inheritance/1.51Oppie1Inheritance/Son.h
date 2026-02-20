#pragma once



//This is how we create a derived class that can inherit things from its base class. Here son is the derived class and mother
//is the base class.
class Son : public Mother
{

public:
	//This is the constructor. We still need the Son to do something when creating an object. Remmber an object is like an empty
	//box for the Son to put stuff in like variables and functions of its class or the mother class.
	//So when called in main picture this as the son making a box.
	Son();
};

