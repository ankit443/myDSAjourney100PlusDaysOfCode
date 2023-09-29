#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int checkString(const string& input){

    if(input == "Inspired"){
        return 3;
        
    }

    return 0;
}


int main(){

    string input;
    cout<<"Enter the string value: ";
    cin>>input;

    int result = checkString(input);
    cout<<"Result: "<<result<<endl;

}