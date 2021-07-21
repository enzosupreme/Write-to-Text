#pragma once
#ifndef RECORD_H
#define RECORD_H
#include <fstream>
#include<string>
using namespace std;

class Record
{
private:
	string name;
	char line;
	fstream file;

public:
	Record(string r)
	{
		name = r + ".txt";
	}
	void createRecord();
	void writeToFile();
	void readRecord();

};
#endif