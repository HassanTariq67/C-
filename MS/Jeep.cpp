#include "Jeep.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

ostream& operator<<(ostream& out, Jeep &)
{
	ifstream read;
	string line;
	read.open("Jeep.txt");

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
Jeep::Jeep()
{
}


Jeep::~Jeep()
{
}
