#include "GulAhmed.h"
#include <string>
using namespace std;

GulAhmed::GulAhmed()
{
}

GulAhmed::~GulAhmed()
{
}

ostream& operator<<(ostream& out, GulAhmed & g)
{
	ifstream read;
	string line;
	read.open("GulAhmed.txt");
	while (!read.eof())
	{
		if (read.is_open())
		{
			getline(read, line);
			out << line << endl;
		}
	}
//	strcpy(g.filename, "GulAhmed.txt");
	return out;
}