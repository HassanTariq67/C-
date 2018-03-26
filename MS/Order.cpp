#pragma once
#include <fstream>
#include "Order.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

Order::Order()
{
}
/*void printcartitems()
{
	ifstream read;
	string line;
	read.open("data" + username + date + ".txt");
	while (!read.eof())
	{
		if (read.is_open())
		{
			getline(read, line);
			cout << line << endl;
		}
	}
}*/
/*ostream& operator<<(ostream &out, Order &O)
{
	ifstream read;
	string line;
	read.open("data"+ O.username + O.date + ".txt");
	while (!read.eof())
	{
		if (read.is_open())
		{
			getline(read, line);
			out << line << endl;
		}
	}
	return out;
}*/
Order::~Order()
{
}
