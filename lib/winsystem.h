#ifndef WINSYSTEM_H
#define WINSYSTEM_H
#include <string>
using namespace std;
void color(string colour);
void netcheck();
void clear();
void addfile(string name,string information);
void removefile(string removePath);
void readinfo(string infopath, string choice);
void rename(string oldName,string newName);
void move(string oldName,string newName);
#endif // WINSYSTEM_H
