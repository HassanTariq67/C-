#include "Nishat.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

ostream & operator<<(ostream& out, Nishat & n)
{
	ifstream read;
	string line;
	read.open("Nishat.txt");
	while (!read.eof())
	{
		if (read.is_open())
		{
			getline(read, line);
			out << line << endl;
		}
	}
	return out;
}
Nishat::Nishat()
{
}


Nishat::~Nishat()
{
}
