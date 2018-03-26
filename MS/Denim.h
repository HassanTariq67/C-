#pragma once
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Denim
{
public:
	friend ostream& operator<<(ostream& , Denim &);
	Denim();
	~Denim();
};

