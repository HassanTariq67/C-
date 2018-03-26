#pragma once
#include "Kayseria.h"
#include "GulAhmed.h"
#include <iostream>
#include <conio.h>
using namespace std;

class ShalwarQameez
{
private:
	int choice;;
	Kayseria K;
	GulAhmed G;
public:
	void AskBrand();
	void BrandListCall();
	friend ostream& operator <<(ostream &, ShalwarQameez&);
	ShalwarQameez();
	~ShalwarQameez();
};

