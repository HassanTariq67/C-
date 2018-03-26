#pragma once
#include "Register.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>

using namespace std;
class GulAhmed :public Register
{
public:
	friend ostream & operator<<(ostream&, GulAhmed &);
	GulAhmed();
	~GulAhmed();
};

