#include"Record.h"
#include<string>
#include<iostream>
#include<fstream>
using namespace std;


void Record::createRecord()
{
	file.open(name, ios::out);
	file.close();
}
void Record::writeToFile()
{
	int num;
	
	file.open(name, ios::out | ios::app);

	cout << "Enter a line of text(use period to end line): " << endl;
	while (line != '.')
	{
		file.put(line);
		cin.get(line);
	}file.put(line); // adds period
	line = ' ';

	file.close();

	return;


}
void Record::readRecord()
{
	string sentence;
	file.open(name, ios::in);
	if (file)
	{
		getline(file, sentence, '.');

		while (file)
		{
			cout << sentence << " ";
			getline(file, sentence, '.'); // getline using . as a delimiter
		}
		file.close();

	}
	else
	{
		cout << "ERROR: file not found." << endl;
	}
}

