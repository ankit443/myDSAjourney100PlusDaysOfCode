#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 123;
    cout << a << endl;
    char b = 'v';
    
    string aString = "this is a string";
    cout<<aString<<endl;

    cout << b << endl;
    bool bl = true;
    cout << bl << endl;

    float f = 1.2;
    long fL = 1.23;
    double fLD = 1.234;
    cout << f << fL << fLD << endl;

    int size = sizeof(fLD);
    cout << "Size of a is " << size << endl;
}