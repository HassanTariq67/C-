#pragma once
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Nishat
{
public:
	friend ostream & operator<<(ostream& c, Nishat &);
	Nishat();
	~Nishat();
};

