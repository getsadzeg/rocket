// runner source file
#include <iostream>
#include <string>
#include "../lib/rocket.h"
using namespace std;
int main() {
	readinfo("greeting", "columns"); 
	move("Github\\test", "Desktop\\test"); 
	rename("Github\test", "Github\\test"); 
	removefile("test"); 
	addfile("/piki/puku/greeting", "hi"); //console error - cerr activated
	addfile("greeting", "hi"); //successful try
	return 0;
}