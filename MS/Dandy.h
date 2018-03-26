#pragma once
#include "Register.h"
#include <iostream>
#include <fstream>
using namespace std;
class Dandy 
{
public:
	void setname();
	friend ostream& operator<<(ostream& out, Dandy &);
	Dandy();
	~Dandy();
};

