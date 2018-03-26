#include "Men.h"
//#include "Jeans.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

Men::Men()
{
}

void Men::askCategory()
{
	cout << "Choose your item category please!" << endl;
	cout << "Enter 1 for Jeans & 2 for Shirts" << endl;
	cin >> itemcategory;
	brandListcall();
}
void Men::brandListcall()
{
	if (itemcategory == 1)
		cout << j;
	else if (itemcategory == 2)
		cout << s;
	else
		cout << "invalid selection ! Try again!" << endl;
}
ostream& operator<<(ostream& out, Men& M)
{
	ifstream read;
	string line;
	read.open("men.txt");
	if (read.is_open())
	{
		while (!read.eof())
		{
			getline(read, line);
			cout << line << endl;
		}
	}
	M.askCategory();
	return out;
}
Men::~Men()
{
}
