#ifndef ROCKET_H
#define ROCKET_H
#include <string>
using namespace std;
void addfile(string name,string information);
void removefile(string removePath);
void readinfo(string infopath, string choice);
void rename(string oldName,string newName);
void move(string oldName,string newName);
#endif
