#include "Jeans.h"
//#include "Levis.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
//#include "Gender.h"
//#include "Men.h"
using namespace std;


Jeans::Jeans()
{
}

void Jeans::askBrand()
{
	cout << "Please select the Brand to check the glorious articles in it. Thankyou!" << endl;
	cout << "Enter 1 for levis"<<endl;
	cout << "Enter 2 for gucci" << endl;
	cout << "Enter 3 for denim" << endl;
	cin >> selectBrand;
	showbrand();
}

void Jeans::showbrand()
{
	if (selectBrand == 1)
		cout << l << endl;
	if (selectBrand == 2)
		cout << G << endl;
	if (selectBrand == 3)
		cout << D << endl;
}
ostream& operator<<(ostream& out, Jeans& j)
{
	ifstream read;
	string line;
	read.open("jeansbrands.txt");

	if (read.is_open())
	{
		while (!read.eof())
		{
			getline(read, line);
			out << line << endl;
		}
	}
	j.askBrand();
	return out;
}
Jeans::~Jeans()
{
}