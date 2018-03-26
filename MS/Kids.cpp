#include "Kids.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

ostream& operator<<(ostream& out, Kids& K)
{
	ifstream read;
	string line;
	read.open("kids.txt");
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
Kids::Kids()
{
}


Kids::~Kids()
{
}
