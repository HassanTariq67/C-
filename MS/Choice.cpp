#pragma once
#include <cstdlib>
#include <sstream>
#include "Choice.h"
#include "Order.h"
#include <iostream>
#include <string>
#include  <fstream>
using namespace std;

Choice::Choice()
{
}

void Choice::DoRegistration()
{
	Register::DoRegistration();
}

void Choice::Start()
{
	cout << endl<<"*.Press 1 to start the management  system....." << endl;
	int choice;
	cin >> choice;
	if (choice==1)
	{
		cout << G;
	}
	/*else
	{
		cout << G;
	}
*/}

Choice::~Choice()
{

}
void Choice::DoLogin()
{
	Register::DoLogin();
}
void Choice::enter()
{
	Register::enter();
}


 void Choice::printcart()
{
	 cout << endl << endl;
	 cout << "the items which you have added to cart are " << endl;
	ifstream read;
	string line;
	read.open("datacart.txt");
	while (!read.eof())
	{
	   	if (read.is_open())
		{
			getline(read, line);
			cout << line << endl;
		}
	}
}

void Choice::addtocart()
{
	cout << "press '1' to add items to the cart  else press  '2'." << endl;
	int y;
	cin >> y;
	if (y == 1)
	{
		cout << "enter the id " << endl;
		int id;
		cin >> id;
		ifstream abc;
		abc.open("levis.txt");
		stringstream read;               //parcing of the data to extract the ID
		string line;
		while (!abc.eof())
		{
			read.str("");
			read.clear();
			getline(abc, line);
			read << line;    read >> ID;      read >> waist;      read >> size;     read >> color;   read >> stuff;	  read >> price;
			if (ID == id)
			{
				ID = 0;
				ofstream xyz;
//				xyz.open("datacart.txt", ostream::out | ostream::trunc );
//				{
					xyz.open("datacart.txt",ios::app);
					{
						xyz << line << endl;
					}
//				}
				//xyz.clear();
				xyz.close();
				break;
			}
		}
		abc.close();
		int g;
		cout << "If you  want to enter more things to cart then press  1,for order press 2 to move on, else 3 to exit the program" << endl;
		cin >> g;
		if (g == 1)
		{
			addtocart();
		}
		else if (g == 2)
		{
			printcart();
		}
		else
		{
			cout << "Thanks for visiting us..............!" << endl;
			exit(0);
		}
	}
	else
		cout << "thanks for visiting us!" << endl;
		//exit(0);
}
