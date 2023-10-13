#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

void reverseString(string& str){
    int length = str.length();
    int n = length - 1;
    int i = 0;

    while(i<=n){
        swap(str[i], str[n]);
        n=n-1;
        i=i+1;

    }
}



int main(){

    string str;
    cin>>str;

    reverseString(str);
    cout<<str;

    return 0;

}