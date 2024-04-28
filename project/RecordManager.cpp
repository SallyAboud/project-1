#include "RecordManager.h"
#include<iostream>
#include<string>

using namespace std;

int RecordManager::s = 0;

void RecordManager::addRecord() {
	cout << "What is your name?\n";
	cin >> name;
	cout << "What is your task duration?\n";
	cin >> taskDuration;
	cout << "What is your address?\n";
	cin >> address;
	cout << "What is the date and time?\n";
	cin >> dateTime;
}
void RecordManager::viewRecord() {

	cout << "\n\tName\t\t" << name
		<< "\n\tTask Duration\t" << taskDuration
		<< "\n\tAddress\t\t" << address
		<< "\n\tDate and Time\t" << dateTime;
}
void RecordManager::editRecord() {
	cout << "do you want to make changes to:\n1.Name\n2.Task Duration\n3.Address\n4.Date and Time\n5.quit";
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
void RecordManager::deleteRecord() {
	name = "";
	taskDuration = "";
	address = "";
	dateTime = "";
}