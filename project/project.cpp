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
	a.addRecord();
	a.saveToFile();
	b.addRecord();
	b.saveToFile();
	c.addRecord();
	c.saveToFile();
}