#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "winsystem.h"
using namespace std;
void move(string oldName, string newName) { //success
	int result;
	result = rename(oldName.c_str(), newName.c_str()); 
}
void rename(string oldName, string newName) { //success
	int result1;
	result1 = rename(oldName.c_str(), newName.c_str());
}
void addfile(string name, string information) { //success
	ofstream myfile;
	myfile.open(name, std::ios_base::app);
	myfile << information << endl;
	myfile.close();
	if (myfile.fail()) {
		cout << "There's some problem. Try to connect the file later." << endl;
	}
	else {
		cout << "Your information(s) is(are) saved/changed successfully" << endl;
	}
}
void removefile(string removePath) { //success
	remove(removePath.c_str());
}
void readinfo(string infopath, string choice) { //success
	string container[100];
	ifstream readfile(infopath);
	if (choice == "default" || choice == "Default" || choice == "DEFAULT") {
		string line1;
		while (getline(readfile, line1))
			cout << line1 << endl;
		readfile.close();
	}
	else if (choice == "lines" || choice == "Lines" || choice == "LINES") {
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++)
				readfile >> container[j];
			readfile.close();
		}
		for (int i = 0; i < 100; i++) {
			cout << container[i] << " ";
		}
		cout << endl;
		cout << "Warning: If you have less informations than we defined,there would be empty seats. " << endl;
	}
	else if (choice == "columns" || choice == "Columns" || choice == "COLUMNS") {
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++)
				readfile >> container[j];
			readfile.close();
		}
		for (int i = 0; i < 100; i++) {
			cout << container[i] << endl;
			cout << "Warning: If you have less informations than we defined,there would be empty seats." << endl;
		}
	}
}
