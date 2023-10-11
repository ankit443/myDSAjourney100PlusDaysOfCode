#include<iostream>
#include<bits/stdc++.h>

//we are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them

//we repeatedly make duplicate removals on s until we no longer can
//return the final string after all such duplicate removals have been made. it can be proven that the answer is unique.

//example: 
//input: "abbaca"
//output: "ca"
//for explanation:  


using namespace std;

string removeDupes(string s){
    string strUnique = "";
    int index = 0;

    while(index<s.length()){
        if(strUnique.length() > 0 && strUnique[strUnique.length()-1] == s[index]){
            strUnique.pop_back();
        }else{
            strUnique.push_back(s[index]);
        }index++;

    }return strUnique;
}


int main(){

    string s;
    cin>>s;
    cout<<endl;

    string result = removeDupes(s);
    cout<<"Result: "<<result<<endl;




}