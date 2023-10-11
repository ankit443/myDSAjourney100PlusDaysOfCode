#include<iostream>
#include<bits/stdc++.h>


using namespace std;

string removeDupesOne(string s){
    string temp = "";

    int index =0 ;

    while(index<s.length()){//here the while loop executes only if the length of the string s is greater than 0, which is normal to happen.

    if(temp.length()> 0 && temp[temp.length()-1] == s[index]){
        temp.pop_back();
    }//this if condition says that we have an AND operator here. it says if we have length of the temp string is greater than 0, and we are accessing the last element of the temp string here to keep checking for dupes, if we have dupes here, then we use the pop_back() function

    else{
        temp.push_back(s[index]);


    }index++;


    }return temp;


}

int main(){



    return 0;
}