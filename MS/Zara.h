#pragma once
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Zara
{
public:
	friend ostream & operator<<(ostream& , Zara &);
	Zara();
	~Zara();
};

