#pragma once
//#include "Choice.h"
#include <iostream>
#include "Choice.h"
#include "Register.h"
#include <string>
#include <conio.h>
using namespace std;

class Order: public Register
{protected:
	Register d;
public:
	void printcartitems();
    friend ostream & operator<<(ostream &out, Order &);
	Order();
	~Order();
};