#include "FileHandler.h"
#include<string>
#include "RecordManager.h" 
#include <fstream>
using namespace std;

void FileHandler:: saveToFile() {
	ofstream project( "D:\\project.txt",std::ios_base::app);
	project<< "\n\tName\t\t" << name
		<< "\n\tTask Duration\t" << taskDuration
		<< "\n\tAddress\t\t" << address
		<< "\n\tDate and Time\t" << dateTime;
	project.close();
}
void FileHandler::readFromFile() {
	ifstream project("D:\\project.txt");
	char x;
	while (!project.eof()) {
		project.get(x);
	}
	project.close();
}
void FileHandler::updateFile() {
	if (s == 1) {
		saveToFile();
	}
	s = 0;
}