#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" "; //output: 2 1

    }cout<<endl;


    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
}

