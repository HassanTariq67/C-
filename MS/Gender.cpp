#include "Gender.h"
//#include "Men.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void Gender::AskGender()
{
	cout << "Choose your gender please!" << endl;
	cout << "Enter 1 for Men, 2 for Women and 3 for Kids" << endl;
	cin >> gender;
	Gendercall();
}

void Gender::Gendercall()
{
	if (this->gender == 1)
		cout << m; 
	else if (gender == 2)
		cout << w;
	else if (gender == 3)
		cout << k;
	else
		cout << "invalid selection ! Try again!" << endl;
}
ostream& operator<<(ostream& out,Gender& g)
{
	ifstream read;
	string line;
	read.open("gender.txt");
	if (read.is_open())
	{
		getline(read, line);
		out << line << endl;
	}
	cout << endl;
	g.AskGender();
	return out;
}

Gender::Gender()
{
}


Gender::~Gender()
{
}
