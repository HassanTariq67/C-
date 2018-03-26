#pragma once
#include "ShippingCharges.h"
#include <iostream>
#include <fstream>
#include <sstream>
ShippingCharges::ShippingCharges()
{
	waist = size = color = stuff = "";
	ID = price = 0;
	price2= 0;
}

ShippingCharges::~ShippingCharges()
{
}

void ShippingCharges::printchargingdetails()
{
	cout << "if price of items is less than or equal to 1500 your charges will be 200" << endl;
	cout << "if price of items is less than or equal to 5000 your charges will be 600" << endl;
	cout << "if price of items is less than or equal to 10000 your charges will be 1500" << endl;
}

/*void ShippingCharges::calculatecharges()
{
}
*/

void ShippingCharges::printcart()
{
/*	int count = 0;
	cout << "Enter the number of items which you want to order:" << endl; cin >> count;
	price2 = new char[count];
*/	printchargingdetails();
	cout << endl << endl << endl;
	getprice();
}

void ShippingCharges::getprice()
{
	int g;	int id;
	cout << "enter the id of the item which you want to buy " << endl;    cin >> id;
	ifstream abc;
	abc.open("datacart.txt");
	if (abc)
	{
		stringstream read;
		string line;
		while (!abc.eof())   		//parcing of the data to extract the ID and price
		{
			read.str("");
			read.clear();
			getline(abc, line);
			read << line;    read >> ID;	read >> waist;    read >> size;	 read >> color;    read >> stuff;	read >> price;

			if (ID == id)      // Adding the total prices
			{
				id = 0;
				price2+= price+48;
				numberofitems++;
			}
		}
		abc.close();
	}
	cout << "enter 1 if you want to buy more items else 2 to continue " << endl;
	cin >> g;
	if (g == 1)
	{
		getprice();
	}
	else
	{
		cout << "You have selected " << numberofitems << " items to order " << endl;
		int charges;
		if (price2 <= 1500)           //Finding the total price
		{
			charges = (price2 + ((price2 * 30) / 100) + 200);
		}
		else if (price2 <= 1500 || price2 <= 5000)
		{
			charges = (price2 + ((price2 * 30) / 100) + 500);
		}
		else if (price2 <= 5000 || price2 <= 10000)
		{
			charges = (price2 + ((price2 * 30) / 100) + 1500);
		}
		cout << endl<<endl<<"your total price is" << charges << endl;
		cout << endl << endl;
	}
	
	//file opened in trunc mode to clear
	abc.open("datacart.txt", ofstream::out | ofstream::trunc);
	abc.close();

}