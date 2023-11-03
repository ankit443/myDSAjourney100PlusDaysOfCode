#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

    int *p=0; // never do this, this is bad practice

    // pointer to int is created and pointing to some garbage address 
    cout<<*p<<endl;

    cout<<"hello"<<endl;



    return 0;
}