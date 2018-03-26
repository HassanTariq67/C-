#pragma once
//#include "NewArrival.h"
//#include "Login.h
#include "AddToCart.h"
#include "Gender.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


               /*This class is usually to make a choice is user wants to add data to cart or not does he wants to register or login 
                 does he wants to register more people or not*/ 

class Choice : public AddToCart
{
private:
	//NewArrival N;
	Gender G;
public:
	 Choice();
	~Choice();
	void printcart();
	virtual void DoRegistration();   //For registratoin
	virtual void DoLogin();          //For Login
	void Start();               //To start the  shopping manegment system
	virtual void enter();
	virtual	void addtocart();
};