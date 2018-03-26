#pragma once
#include "ShalwarQameez.h"
#include "Shawl.h"
#include "Men.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class Women: public Men
{
private:
	int itemcategory;
	ShalwarQameez Q;
	Shawl S;
public:
	void AskCategory();
	void BrandListcall();
	friend ostream& operator<<(ostream&, Women&);
	Women();
	~Women();
};

