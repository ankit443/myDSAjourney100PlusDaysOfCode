#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars){
    int i = 0;

    int ansIndex = 0; //any answer we get we have to make the arranegments in the same vector itself. any valid answer, element, will be edited back to the vector 
    int n = chars.size();


    while(i<n){
        int j = i+1;
        while(j<n && chars[i] == chars[j]){
            j++;

        }
        //yahan kab aaoge 
        //ya toh vector poora traverse krdiya
        //ya phir new/different character encounter kia hai

        //storing old character 
        chars[ansIndex++] = chars[i];

        int count = j-i;

        if(count>1){
            //mujhe count ko single single krke daalna hai
            //converting counting into single digit and saving
            string cnt = to_string(count);
            for(char ch: cnt){
                chars[ansIndex++] = ch;
            }
        }

        i=j;
    }

    return ansIndex;


}


int main(){


}