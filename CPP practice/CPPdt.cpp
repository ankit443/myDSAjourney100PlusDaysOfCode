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


//talking about memory here: lets say we have an int a = 8; integer means it needs 4 bytes of memory thru sizeof function, each byte has 8 bits, so 32 bits in total. converting 8 to binary we get 1000 which is 4 bit. so it stores like this: 00000000 00000000 00000000 00001000
// max value of 4 bytes is 32 bits. mac value can also be guessed as 2^32 - 1; and min value is 0


//lets say we have a negative number: now ASCII values come into play 

//Type casting: conversion of one data type to the other in a program. typecasting can be done in 2 ways: automatically by the compiler and manually by the programmer or user. typecasting is also known as type conversion. example of typecasting: let's say we have an int=5 and we want to convert it to a float number, what we do is:

// int num=5;
// float x;
// x=float(num);
// x=5.0;


// take 2s compliment of 101
//for taking 2s compliment we have to first get 1s compliment: that is 010
// then we take 2s compliment by adding +1 to 010 which gives out 011

//unsigned int only lets u use positive numbers from it

