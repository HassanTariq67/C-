#pragma once
#include "Jeans.h"
#include "Shirts.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class Men
{
private:
	int itemcategory;
	Jeans j;
	Shirts s;
public:
	friend ostream& operator<<(ostream&, Men&);
	void askCategory();
	void brandListcall();
	Men();
	~Men();
};

