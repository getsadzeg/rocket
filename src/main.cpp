//Library testing
//Math components is cross-platform.
//Winsystem components tested on Windows 8.
#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#include "api\winsystem.h" //It's changed to run with Visual Studio on Windows. On Linux,it could has <api/winsystem.h>
#include "api/math.h" //It's changed to run with Visual Studio on Windows. On Linux,it could has <api/math.h>
using namespace std;
int a = 12;
int b = 2;
int c = 3;
int n;
int main() {
	color("green"); //winsystem
	//addfile("rockeeet.txt", "raketa modiis :D"); //winsystem //commented for a reason. but it's workin'
	readinfo("rockeeet.txt", "lines"); //winsystem
	move("C:\\Users\\User-pc\\Desktop\\magaria.txt", "C:\\Users\\User-pc\\My Documents\\magaria.txt"); //winsystem
	rename("C:\\Users\\User-pc\\My Documents\\magaria.txt", "C:\\Users\\User-pc\\My Documents\\heybro.txt"); //winsystem
	remove("C:\\Users\\User-pc\\My Documents\\heybro.txt"); //winsystem
	netcheck(); //winsystem
	sum(a, b); //math
	subtraction(a, b); //math
	divide(b, a); //math
	fromto(n); //math
	clear(); //winsystem
	digitsnumb(a, b); //math
	system("pause"); //It mustn't on Linux
	return 0;
}
