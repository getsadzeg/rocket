#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include "rocket.h"
using namespace std;
const int SUCCESS = 1;
const int FAIL = 0;

void move(string oldName, string newName) { 
	int result;
	result = rename(oldName.c_str(), newName.c_str());
}
void rename(string oldName, string newName) { 
	int result1;
	result1 = rename(oldName.c_str(), newName.c_str());
}
void addfile(string name, string information) { 
	ofstream myfile;
	myfile.open(name.c_str(), std::ios_base::app); //c_str() is more safe
	myfile << information << endl;
	myfile.close();
	if (myfile.fail()) {
		cerr << FAIL << endl;
	}
	else {
		cout << SUCCESS << endl;
	}
}
void removefile(string removePath) { 
	remove(removePath.c_str());
}
void readinfo(string infopath, string choice) { 
	vector <string> v;
	ifstream readfile(infopath);
	string line1;
	if (choice == "default" || choice == "Default" || choice == "DEFAULT") {
		while (getline(readfile, line1))
			cout << line1 << endl;
		readfile.close();
	}
	
	else if (choice == "columns" || choice == "Columns" || choice == "COLUMNS") {
		while(readfile >> line1) {
			v.push_back(line1);
		}
		readfile.close();
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << endl;		
		}
		
	}
}
