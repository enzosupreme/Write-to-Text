#include"Record.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	int num;
	int accu =1;
	int choice = 0;
	string filename;
	char line;
	cout << "\t   MENU\n";
	cout << "--------------------------\n";
	cout << accu << ")Create a text file." << endl; accu++;
	cout << accu << ")Write to text file." << endl; accu++;
	cout << accu << ")Read text file." << endl; accu++;
	cout << accu << ")Exit." << endl;
	cin >> choice;

	while (choice != accu)
	{
		accu = 1;

		switch (choice)
		{
			

		case 1:
		{
			cout << "Enter a file name(no ext): ";
			cin >> filename;
			Record newRecord(filename);
			newRecord.createRecord();
			//unique_ptr<Record>newRecord(new Record);
			break;
		}

		case 2 :
		{
			cout << "Enter a file name(no ext): ";
			cin >> filename;
			Record newRecord(filename);
			cout << "Opening file...." << endl;
			cout << "How many lines would you like to write?: ";
			cin >> num;
			for (int x = 0; x < num; x++)
			{
				newRecord.writeToFile();

			}
			break;

		}
		case 3:
		{
			cout << "Enter a file name(no ext): ";
			cin >> filename;
			Record newRecord(filename);
			cout << "Opening file...." << endl;
			cout << "Reading file...\n---------------------\n";
			newRecord.readRecord();
			cout << endl;
		}
			break;
		case 4 :
			cout << "Exiting..." << endl;
			break;
		default:
			cout << "Goodbye." << endl;

		}
	
		cout << "\t   MENU\n";
		cout << "--------------------------\n";
		cout << accu << ")Create a text file." << endl; accu++;
		cout << accu << ")Write to text file." << endl; accu++;
		cout << accu << ")Read text file." << endl; accu++;
		cout << accu << ")Exit." << endl;
		cin >> choice;
	}

	cout << "Exiting program....\n";

	system("pause");
	return 0;
	

}