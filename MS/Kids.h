#pragma once
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Kids
{
public:
	friend ostream& operator<<(ostream&, Kids&);
	Kids();
	~Kids();
};

