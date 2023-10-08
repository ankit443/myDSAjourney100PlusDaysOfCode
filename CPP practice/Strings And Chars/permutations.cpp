#include<iostream>
#include<bits/stdc++.h>


using namespace std;

bool checkEqual(int a[26], int b[26]){
    
    for(int i=0; i<26; i++){
        if(a[i] != b[i]){
            return 0;

        }
    }

    return 1;

}


bool checkInclusion(string S, string T){

    //character count array
    int count1[26] = {0};

    for(int i=0; i<S.length(); i++){
        int index = S[i] - 'a';
        count1[index]++;
        
    }




}

int main(){





}