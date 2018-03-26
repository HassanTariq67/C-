#pragma once
#include "Kids.h"
#include "Women.h"
#include "Men.h"
#include "Women.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Gender
{
private:
	int gender;
	Men m;
	Women w;
	Kids k;
public:
	friend ostream& operator<<(ostream&,Gender &);
	void AskGender();
	void Gendercall();
	Gender();
	~Gender();
};

