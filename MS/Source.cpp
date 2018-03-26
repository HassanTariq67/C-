#pragma once
#include <fstream>
#include "ShippingCharges.h"
#include <iostream>
#include <conio.h>
#include <string>
#include "Gender.h"
#include "Order.h"
#include "Choice.h"
using namespace std;

//extern char filename;
int main()
{
	cout <<endl<< ".....................................WELCOME TO SHOPPING ANAGEMENT SYSTEM!......................................." <<endl<<endl<<endl;
	Register* r;
	Order o;
	Choice c;
	r = &c;
	r->enter();
	c.Start();
	c.addtocart();
	ShippingCharges s;
	s.printcart();
	cout << "..........................................Thanks for your patience!!!.Hope you had a good time............................" << endl << endl << endl;
	_getche();
}