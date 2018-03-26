 #pragma once
#include <iostream>
#include <string>
using namespace std;

extern string filename;
class Register
{
protected:
	string filename;
	string hours, mins, secs;
	string date;
	string username;
	string password;
	string un, pw;
public:
	void GetDate();
	virtual void DoRegistration();   //for registration of the user
	virtual void enter();    //Asks for registration of people
	virtual  void DoLogin();   //Does the login
	Register();
	~Register();
};

