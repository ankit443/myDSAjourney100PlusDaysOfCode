//return maximum occuring character in a new string

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char getMaxOccurringChar(string s){

    int arr[26];

    //create an array of count 

    for(int i=0; i<s.length(); i++){
        char ch = s[i];

        int number = 0;
        //lowercase
        if(ch>= 'a' && ch <= 'z'){
            number = ch - 'a';
        }else{
            //uppercase
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;

    for(int i=0; i<s.length(); i++){

        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
        
    }

}

int main(){


    string s;
    cin>>s;


    return 0;

}