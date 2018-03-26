#include "ShalwarQameez.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

void ShalwarQameez::AskBrand()
{
	cout << "Enter 1 for Gul Ahmed and 2 for Nishat" << endl;
	cin >> choice;
	BrandListCall();
}

void ShalwarQameez::BrandListCall()
{
	if (choice == 1)
	{
		cout << K;
	}
	else
	{
		cout << G;
	}
}
ShalwarQameez::ShalwarQameez()
{
}

//display the items in the file of the brand
ostream& operator <<(ostream & out, ShalwarQameez& q)
{
	ifstream read;
	string line;
	read.open("shalwarqameez.txt");
	while (!read.eof())
	{
		if (read.is_open())
		{
			getline(read, line);
			out << line << endl;
		}
	}
	q.AskBrand();
	return out;
}

ShalwarQameez::~ShalwarQameez()
{
}
