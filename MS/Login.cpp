 #pragma once
#include <iostream>
//#include "NewArrival.h"
//#include "Choice.h"
#include <fstream>
#include <string.h>
#include "Login.h"
using namespace std;

Login::Login()
{
}

Login::~Login()
{
}

void Login::DoLogin()
{
	cout << "enter the user name" << endl;
	cin >> username;
	cout << "enter the password" << endl;
	cin >> password;
	ifstream read("data" + username + ".txt");
	getline(read, un);
	getline(read, pw);
	if (un == username && pw == password)
	{
		cout << "Congratulations! successful login......." << endl;
	}
	else
	{
		cout << "Sorry! unsuccessful login ..........(try  again)" << endl;
		DoLogin();
	}
}