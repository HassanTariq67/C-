#pragma once
#include "Register.h"
#include <istream>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Register::Register()
{
	hours = mins = secs = date = username = password = un = pw = "";
}

void Register::enter()
{
	int choice;
	cout << "Press 1 to register if you are new customer and 2 for login if you already have an id:" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cin.ignore();
		DoRegistration();
		cout << "Do U want to register more people...?   (if YES,then press '1' else  press '2')" << endl;
		cin >> choice;
		if (choice == 1)
		{
			enter();
		}
		else
		{
			DoLogin();
		}
	}
	else
	{
		DoLogin();
	}
}
void Register::GetDate()
{
	cout << endl<<"Kindly Enter the time at which you are logging in including seconds" << endl;
	cout << endl;
	cout << "*.enter the hours: ";   cin >> hours;
	cout << "*.enter the mins: " ;   cin >> mins;
	cout << "*.enter the secs: " ;  cin >> secs;
	date = hours + mins + secs;
}

void Register::DoLogin()
{
	cin.ignore();
	cout <<endl<< " **.Please enter the username of your login: ";
	getline(cin, username);
	cout << " **.Please enter the password as well: ";
	cin >> password;
	ifstream read("data" + username + ".txt");
	getline(read, un);
	getline(read, pw);
	if (un == username && pw == password)
	{
		cout << endl<<" Congratulations! successful login.......\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl<<endl;
	}
	else
	{
		cout << endl<<"Sorry! unsuccessful login ..........(try  again)" << endl;
		DoLogin();
	}
}
Register::~Register()
{
}

void Register::DoRegistration()
{
	//GetDate();
    cout << "Dear coustmer! Please enter the user name" << endl;
	std::getline(std::cin, username);
	ifstream infile("data" + username + ".txt");
	if (infile)
	{
		cout << "Username already exists. Enter another username." << endl;
		DoRegistration();
	}
	else
	{
		cout << "enter the password as well" << endl;
		getline(cin,password);
		ofstream file;
		file.open("data" + username + ".txt");
		file << username << endl;
		file << password << endl;
	}

}