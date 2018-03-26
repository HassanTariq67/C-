#pragma once
#include "Nishat.h"
#include "Zara.h"
#include <iostream>
#include <conio.h>
using namespace std;
class Shawl
{
private:
	int choice;
	Nishat N;
	Zara Z;
public:
	void AskBrand();
	void BrandListCall();
	friend ostream & operator<<(ostream&, Shawl &);
	Shawl();
	~Shawl();
};

