#pragma once
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Gucci
{
public:
friend ostream& operator<<(ostream& out, Gucci &);
	Gucci();
	~Gucci();
};

