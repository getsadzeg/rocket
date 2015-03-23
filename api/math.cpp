#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include "math.h"
/*your function definition here*/
void sum(int x,int y) {
    cout << "//Sum" << endl;
    cout << x+y << endl;
}
void subtraction(int x,int y) {
    cout << "//Subtract" << endl;
cout << x-y << endl;
}
void divide(int x,int y) {
    cout << "//Divide" << endl;
    if(y == 0) cout << "Cannot divide by zero" << endl;
    else cout << x/y << endl;
}
void multiply(int x,int y) {
    cout << "//Multyply" << endl;
    cout << x*y << endl;
}
void fromto(int n) {
    cout << "//Fromto(requires input)" << endl;
    cin>>n;
    cout<<"From 1 to that number Sum = "<<(n+n*n)/2<<endl;
    cout << "Copyright Zarna0x" << endl;
}
void digitsnumb(int x, int y) {
    x = 0;
    y = 0;
    cout<<"a="; cin>>x;

        while
         (x>0)
        {
           x/=10;
           y++;
        }

        cout<<"Number of digits ="<< " " <<y<<endl;
        cout << "Copyright BERU" << endl;
}
