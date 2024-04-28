#pragma once
#ifndef Menu_h
#define Menu_h
#include<string>
#include"RecordManager.h"
#include"PasswordManager.h"
#include"FileHandler.h"
using namespace std;
class Menu :public FileHandler, public PasswordManager
{
	void displayMainMenu();
	void displayRecordList();
	void getUserChoice();
};
#endif Menu
