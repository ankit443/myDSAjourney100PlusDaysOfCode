//problem statement:
//we are given a string 'S'. our task is to check whether the string is palindrome or not. for checking the palindrome, consider alphabets and numbers, only and ignore the symbols and whitespaces. note: String 'S' is not case sensitive.


//example: Let 'S' = "c1 0$d@eeD o1c"
//if we ignore the special characters , whitespaces and convert all the uppercase letters to lowercase, we get S = "c1odeedo1c", which is a palindrome. Hence the given string is also a palindrome. 

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}



int main(){


}