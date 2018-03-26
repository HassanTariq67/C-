#pragma once
#include <cstring>
#include <iostream>
#include <conio.h>
#include "Register.h"
#include <string>
using namespace std;

//This is an abstract class

class AddToCart : public Register
{
protected:
	int ID;
	string waist;
	int size;
	string stuff;
	int price;
	string color;
public:
	virtual void addtocart()=0;   //pure virtual function
	AddToCart();
	~AddToCart();
};

