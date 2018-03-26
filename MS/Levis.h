#pragma once
//#include "Jeans.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class Levis
{

public:
	friend ostream& operator<<(ostream& out, Levis& );
	Levis();
	~Levis();
};