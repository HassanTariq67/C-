#include "Dandy.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void Dandy::setname()
{
}
ostream& operator<<(ostream& out, Dandy & D)
{
	ifstream read;
	string line;
	read.open("dandy.txt");
	if (read.is_open())
	{
		while (!read.eof())
		{
			getline(read, line);
			out << line << endl;
		}
	}
	//filename = "dandy.txt";
	return out;
}
Dandy::Dandy()
{
}


Dandy::~Dandy()
{
}
