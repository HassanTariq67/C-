#pragma once
#include "Register.h"
//#include "Choice.h"
//#include "NewArrival.h"
#include <iostream>
#include <string>
using namespace std;

class Login : public Register
{
public:
	void DoLogin();
	Login();
	~Login();
};

