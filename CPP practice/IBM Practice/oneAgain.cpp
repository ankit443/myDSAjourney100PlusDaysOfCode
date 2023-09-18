#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

//function below

string decimalToBinary(int decimal){
    if(decimal==0){
        return 0; //special case: 0 in binary is 0

    }

    string binary = "";

    while(decimal>0){
        int remainder=decimal%2;
        binary=to_string(remainder) + binary;//appending the remainder to the front
        decimal /=2;



    }

    return binary;


}




int main(){

    int decimalNumber;


    //input
    cout<<"Enter a decimal number: ";
    cin>>decimalNumber;

    //check if input is valid
    if(decimalNumber<0){
        cout<<"Invalid"<<endl;

    }else{
        string binaryNumber = decimalToBinary(decimalNumber);

        cout<<"Binary representation of the number: "<<binaryNumber<<endl;
    }

    return 0;




}