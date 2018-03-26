#include "Gucci.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

ostream& operator<<(ostream& out, Gucci & )
{
	ifstream read;
	string line;
	read.open("Gucci.txt");

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
Gucci::Gucci()
{
}


Gucci::~Gucci()
{
}
