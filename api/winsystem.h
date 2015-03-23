#ifndef WINSYSTEM_H
#define WINSYSTEM_H
#include <string>
using namespace std;
void netcheck();
void restartsoft();
void addfile(string name,string information);
void removefile(string path);
void readinfo(string infopath, string container[30]);
void rename(string oldName,string newName);
void move(string oldName,string newName);
#endif // WINSYSTEM_H
