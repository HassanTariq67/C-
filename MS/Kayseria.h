#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

class Kayseria
{
public:
	friend ostream & operator<<(ostream& c,Kayseria &);
	Kayseria();
	~Kayseria();
};

