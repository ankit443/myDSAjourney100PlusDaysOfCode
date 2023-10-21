// // Write a function that takes in a string of lower case English alphabet letters and returns the index of the string's first
// non repeating character.
// The first non repeating character is the first character in the string that occurs only ones.
// If the input string does not have a non repeating character, the function should return -1

#include<iostream>
#include<bits/stdc++.h>

// we can solve this problem using a hash map to count the frequency of each character in the input string. Then, iterate through the string to find the first character with a count of 1. 

using namespace std;

int firstNonRepChar(const string& s){
    unordered_map<char, int> charCount;

    //counting the frequency of each string
    for(char ch: s){ //for char ch: s is for each of the characters of the input string
        charCount[ch]++;

    }

    //find the first non repeating character 
    for(int i=0; i<s.length(); i++){
        if(charCount[s[i]]==1){
            return i;
        }
    }

    //non repeating character found
    return -1;



}


int main(){

    string input;
    cin>>input;

    int result = firstNonRepChar(input);

    if(result!=-1){
        cout<<"index of first non repeating character is: "<<result<<endl;
    }else{
        cout<<"There is no non repeating character in the input string"<<endl;
    }



    return 0;



}