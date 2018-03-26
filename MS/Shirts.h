#pragma once
#include "Outfitters.h"
#include "Dandy.h"
#include "Jeep.h"
#include <iostream>
#include <fstream>
using namespace std;
class Shirts
{private:
	int selectbrand;
	Outfitters O;
	Jeep J;
	Dandy D;
public:
	friend ostream& operator<<(ostream&, Shirts&);
	void ShowBrand();
	void AskBrand();
	void printBrandList();
	Shirts();
	~Shirts();
};

