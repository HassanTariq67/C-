#pragma once
#include "Gucci.h"
#include "Denim.h"
#include "Levis.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Jeans
{
	int selectBrand;
	Levis l;
	Gucci G;
	Denim D;
public:
	friend ostream& operator<<(ostream&, Jeans&);
	void showbrand();
	void askBrand();
	void printBrandList();
	Jeans();
	~Jeans();
};