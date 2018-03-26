#include "Women.h"
#include <fstream>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

Women::Women()
{

}
void Women::AskCategory()
{
	cout << "Choose your item category please!" << endl;
	cout << "Enter 1 for Shalwar qameez & 2 for shawl" << endl;
	cin >> itemcategory;
	BrandListcall();
}
void Women::BrandListcall()
{
	if (itemcategory == 1)
		cout << Q;
	else if (itemcategory == 2)
		cout << S;
	else
		cout << "invalid selection ! Try again!" << endl;
}
ostream& operator<<(ostream& out, Women& W)
{
	ifstream read;
	string line;
	read.open("Women.txt");
	if (read.is_open())
	{
		while (!read.eof())
		{
			getline(read, line);
			cout << line << endl;
		}
	}
	W.AskCategory();
	return out;
}
Women::~Women()
{

}