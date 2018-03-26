#include "Denim.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

ostream& operator<<(ostream& out, Denim &)
{
	ifstream read;
	string line;
	read.open("Denim.txt");
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
Denim::Denim()
{
}


Denim::~Denim()
{
}
