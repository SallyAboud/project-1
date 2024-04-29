#include "RecordManager.h"
#include<iostream>
#include<string>
#include"PasswordManager.h"

using namespace std;

int RecordManager::s = 0;
int RecordManager::n = 0;

void RecordManager::addRecord() {
	cout << "What is your name?\n";
	getline(cin, name);
	cout << "What is your task duration?\n";
	getline(cin, taskDuration);
	cout << "What is your address?\n";
	getline(cin, address);
	cout << "What is the date and time?\n";
	getline(cin, dateTime);
}
void RecordManager::viewRecord() {
	cout << "What is the password?\n";
	string pass;
	cin >> pass;
	if (pass == getPassword()) {
		cout << "\n\tName\t\t" << name
			<< "\n\tTask Duration\t" << taskDuration
			<< "\n\tAddress\t\t" << address
			<< "\n\tDate and Time\t" << dateTime << "\n";
	}
	else {
		cout << "incorrect password";
	}
}
void RecordManager::editRecord() {
	cout << "What is the password?\n";
	string pass;
	cin >> pass;
	if (pass==getPassword() ){
		cout << "Do you want to make changes to:\n1.Name\n2.Task Duration\n3.Address\n4.Date and Time\n5.Quit\n";
		int a;
		cin >> a;
		while (a != 5) {
			switch (a) {
			case 1:
				cout << "What is your new name?\n";
				cin >> name;
				break;
			case 2:
				cout << "What is your  new task duration?\n";
				cin >> taskDuration;
				break;
			case 3:
				cout << "What is your new address?\n";
				cin >> address;
				break;
			case 4:
				cout << "What is the new date and time?\n";
				cin >> dateTime;
			default:
				cout << "invalid number";
			}
			cout << "do you want to make any other changes to:\n1.Name\n2.Task Duration\n3.Address\n4.Date and Time\n5.quit";
			cin >> a;
		}
		s++;
	}
	else {
		cout << "incorrect password\n";
	}
}
void RecordManager::deleteRecord() {
	cout << "What is the password?\n";
	string pass;
	cin >> pass;
	if (pass == getPassword()) {
		name = "";
		taskDuration = "";
		address = "";
		dateTime = "";
		n++;
		
	}
	else {
		cout << "incorrect password\n";
	}
}