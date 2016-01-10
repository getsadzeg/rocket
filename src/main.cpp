// runner source file
#include <iostream>
#include <string>
#include "../lib/winsystem.h"
using namespace std;
int main() {
	readinfo("rockeeet.txt", "lines"); 
	move("C:\\Users\\User-pc\\Desktop\\magaria.txt", "C:\\Users\\User-pc\\My Documents\\magaria.txt"); 
	rename("C:\\Users\\User-pc\\My Documents\\magaria.txt", "C:\\Users\\User-pc\\My Documents\\heybro.txt"); 
	remove("C:\\Users\\User-pc\\My Documents\\heybro.txt"); 
	return 0;
}
