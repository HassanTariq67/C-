#include <iostream>
#include <fstream>
using namespace std;
#pragma once
class Jeep
{
public:
	friend ostream& operator<<(ostream& out, Jeep &);
	Jeep();
	~Jeep();
};

