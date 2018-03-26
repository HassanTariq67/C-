#pragma once
#include <iostream>
#include "Choice.h"
//#include "Register.h"
using namespace std;

class ShippingCharges 
{
private:
	int price2=0;
	string  waist, size, color, stuff;
	int ID,price;
	int numberofitems=0;
public:
	void printchargingdetails();   // Shows the charges of the shipping
	void printcart();             //contains other funtions
//	void calculatecharges();     //Calculates Charges
	void getprice();
	ShippingCharges();
	~ShippingCharges();
};
