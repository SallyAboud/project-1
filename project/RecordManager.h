#pragma once
#ifndef RecordManager_h
#define RecordManager_h
#include<string>
using namespace std;
class RecordManager 
{
protected:
	string taskDuration;
	string name;
	string address;
	string dateTime;
	static int s;
public: 
	void addRecord();
	void viewRecord();
	void editRecord();
	void deleteRecord();
};
#endif // !1
