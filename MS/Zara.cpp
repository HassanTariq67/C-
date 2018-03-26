#include "Zara.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

ostream & operator<<(ostream& out, Zara & z)
{
	ifstream read;
	string line;
	read.open("zara.txt");
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
Zara::Zara()
{
}


Zara::~Zara()
{
}
