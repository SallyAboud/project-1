#include "Menu.h"
#include<string>
#include"RecordManager.h"
#include"PasswordManager.h"
#include"FileHandler.h"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	Menu a,b,c;
	string x;
	a.addRecord();
	cout << "enter the password: ";
	cin >> x;
	a.setPassword(x);
	cout << a.getPassword()<<"\n";
	a.saveToFile();
	a.editRecord();
	a.viewRecord();
}