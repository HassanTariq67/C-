#include "Levis.h"
#include "Jeans.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
/*#include "Gender.h"
#include "Men.h"
*/using namespace std;

Levis::Levis()
{
}


//display the items in the file of the brand
ostream& operator<<(ostream& out, Levis& l)
{
	ifstream read;
	string line;
	read.open("levis.txt");

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

Levis::~Levis()
{
}
