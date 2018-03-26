#include "Outfitters.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;


ostream& operator<<(ostream& out, Outfitters &)
{
	ifstream read;
	string line;
	read.open("outfitters.txt");
	if (read.is_open())
	{
		while (!read.eof())
		{
			getline(read, line);
			out << line << endl;
		}
	}
	return out;
}
Outfitters::Outfitters()
{
}


Outfitters::~Outfitters()
{
}
