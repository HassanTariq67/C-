#include "Kayseria.h"


Kayseria::Kayseria()
{
}

Kayseria::~Kayseria()
{
}

ostream& operator<<(ostream& out, Kayseria & k)
{
	ifstream read;
	string line;
	read.open("Kayseria.txt");
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