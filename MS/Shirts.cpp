#include "Shirts.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void Shirts::AskBrand()
{
	cout << "Please select the Brand to check the glorious articles in it. Thankyou!" << endl;
	cout << "Enter 1 for dandy" << endl;
	cout << "Enter 2 for jeep" << endl;
	cout << "Enter 3 for outfitters" << endl;
	cin >> selectbrand;
	ShowBrand();
}
void Shirts::ShowBrand()
{
	if (selectbrand == 1)
		cout << D << endl;
	if (selectbrand == 2)
		cout << J << endl;
	if (selectbrand == 3)
		cout << O << endl;
}

ostream& operator<<(ostream& out, Shirts& S)
{

	ifstream read;
	string line;
	read.open("shirtsbrands.txt");
	if (read.is_open())
	{
		while (!read.eof())
		{
			getline(read, line);
			cout << line << endl;
		}
	}
	S.AskBrand();
	return out;
}
Shirts::Shirts()
{
}

Shirts::~Shirts()
{
}
