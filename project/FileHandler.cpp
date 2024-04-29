#include "FileHandler.h"
#include<string>
#include "RecordManager.h" 
#include <fstream>
#include<iostream>
using namespace std;
string file;
void FileHandler:: saveToFile() {
	string path;
	path = "d:\\";
	cout << "enter the name of the file where this record will be saved :\n";
	cin >> file;
	path += file;
	path += ".txt";
ofstream project(path);
	project << "\n\tName\t\t" << name
		<< "\n\tTask Duration\t" << taskDuration
		<< "\n\tAddress\t\t" << address
		<< "\n\tDate and Time\t" << dateTime;
	project.close();
	cout << "The file is saved\n";

}
void FileHandler::readFromFile() {
	string path = "d:\\";
	cout << "enter the name of the file where this record will be saved :\n";
	cin >> file;
	path += file;
	path += ".txt";
	ifstream project(path);
	char x;
	while (!project.eof()) {
		project.get(x);
	}
	project.close();
}
void FileHandler::updateFile() {
	if (s == 1) {
		cout << "You did it";
		string path;
		path = "d:\\";
		path += file;
		cout << file;
		path += ".txt";
		ofstream project(path);
		if (n == 1) {
			project << "";
			project.close();
		}
		else {
			project << " ";
		}
		n = 0;
	}
	s = 0;
}