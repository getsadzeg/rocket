// runner source file
#include <iostream>
#include <string>
#include "../lib/rocket.h"
using namespace std;
int main() {
	readinfo("rockeeet", "lines"); 
	move("Github\\test", "Desktop\\test"); 
	rename("Github\test", "Github\\test"); 
	remove("test"); 
	addfile("/piki/puku/greeting", "hi"); //console error - cerr activated
	addfile("greeting", "hi"); //successful try
	return 0;
}