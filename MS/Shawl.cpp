#include "Shawl.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;


void Shawl::AskBrand()
{
	cout << "Enter 1 for nishat and 2 for Zara" << endl;
	cin >> choice;
	BrandListCall();
}

void Shawl::BrandListCall()
{
	if (choice == 1)
	{
		cout << N;
	}
	else
	{
		cout << Z;
	}
}
ostream & operator<<(ostream& out, Shawl & s)
{
	ifstream read;
	string line;
	while (!read.eof())
	{
		read.open("shawl.txt");
		while (!read.eof())
		{
			if (read.is_open())
			{
				getline(read, line);
				out << line << endl;
			}
		}
	}
	s.AskBrand();
	return out;
}
Shawl::Shawl()
{
}


Shawl::~Shawl()
{
}
