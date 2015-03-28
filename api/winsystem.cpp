#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "winsystem.h"
using namespace std;
void clear() { //success
    system("cls");
}
void color(string colour) { //success
	if (colour == "blue" || colour == "Blue" || colour == "BLUE") system("COLOR 1");
	else if (colour == "green" || colour == "Green" || colour == "GREEN") system("COLOR 2");
	else if (colour == "aqua" || colour == "Aqua" || colour == "AQUA") system("COLOR 3");
	else if (colour == "red" || colour == "Red" || colour == "RED") system("COLOR 4");
	else if (colour == "purple" || colour == "Purple" || colour == "PURPLE") system("COLOR 5");
	else if (colour == "yellow" || colour == "Yellow" || colour == "YELLOW") system("COLOR 6");
	else if (colour == "white" || colour == "White" || colour == "WHITE") system("COLOR 7");
	else if (colour == "gray" || colour == "grey" || colour == "Gray" || colour == "Grey" || colour == "GRAY" || colour == "GREY") system("COLOR 8");
}
void netcheck() { //success
	int failed = system("ping -n 1 www.google.com");
	if (failed) {
		cout << endl;
		cout << "Internet Connection Is Not Available" << endl;
		cout << endl;
		cout << "Warning: If it types the hostname is incorrect,it is internet's problem." << endl;
	}
	else {
		cout << endl;
		cout << "Internet Connection Is Available" << endl;
		cout << endl;
	}
}
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
