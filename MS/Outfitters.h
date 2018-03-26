#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Outfitters
{
public:
	friend ostream& operator<<(ostream& out, Outfitters &);
	Outfitters();
	~Outfitters();
};
