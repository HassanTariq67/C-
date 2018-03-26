/*#pragma once
//#include "Choice.h"
//#include "Login.h"
#include <iostream>
#include  <fstream>
#include <string>
#include "NewArrival.h"
using namespace std;

ostream& operator << (ostream & out, NewArrival & n)
{
	ifstream read;
	string line;
	read.open("newarrivals.txt");
	if (read.is_open())
	{
		getline(read, line);
		cout << line << endl;
	}
	return out;
}*/