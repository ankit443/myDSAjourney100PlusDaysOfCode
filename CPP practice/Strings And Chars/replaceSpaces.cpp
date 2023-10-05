#include<iostream>
#include<bits/stdc++.h>


using namespace std;

// we have  been given a string STR of words . we need to replace all the spaces between words with @40

string replaceSpaces(string &str){
    string temp = "";

    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');

        }else{
            temp.push_back(str[i]);

        }
    }

    
}

int main(){

}