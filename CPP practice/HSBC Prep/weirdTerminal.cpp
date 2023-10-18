//question 1 HSBC Prep 

// this is weird problem in Susan's terminal. She cannot write more than two words each line, if she writes more than two, it takes only 2 words and the rest are not taken. So she needs to use the enter and put the rest in a new line. For a given paragraph, how many lines are needed to be written in Susan's terminal?

//Input format: A string as the text to input in the terminal

//Output format: Number of lines written

//Constraints: Number of words <= 10^7

//Sample Input: How long do you have to sit dear?

// Sample Output: 4

// Explanation: The written text will  be:
// How long | do you | have to | sit dear


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;

    getline(cin, s);
    int ans=0;

    istringstream ss(s);

    while(ss){
        string word;
        int flag=0;

        ss>>word;

        if(word=="") break;
        for(int i=0; i<word.length(); i++){
            for(!isalpha(word[i])){
                if(i!=0){
                    if(i==word.length()-1){
                        if(word[i]==',' || word[i]=='.' || word[i] == ';' || word[i] == '?' || word == '!' || ){
                            continue;

                        }else if(word[i] == '.' && word[i+1] != '.'){
                            flag++;
                            break;

                        }else if(word[i] =='-' && isalpha(word[i+1])){
                            continue;

                        }else{
                            flag++;
                            break;

                        }
                    }else{
                        flag++;
                        break;

                    }
                }

                if(flag==0){
                    ans++;

                }
            }
            cout<<floor((ans-1)/2)+1;
        }
    }





    return 0;


}