#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int largestSum(int arr[3][4], int row, int col){

    int maxi = INT_MIN;
    int rowIndex = -1;


    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum+=arr[row][col];
        }

        if(sum>maxi){
            
            maxi = sum;
            rowIndex=row;

        }
    }

    fout<<"The maximum sum is: "<<maxi<<endl;
    return rowIndex;



}

int main(){

    int arr1[3][4];
    int target;

    //taking input for elements
    cout<<"Enter elements: "<<endl;
    for(int i= 0;i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }


    //printing the array
    cout<<"Printing the array: "<<endl;

    

    // fout<<"Enter the element to search: "<<end;;
    // cin>>target;


    
    



    return 0;
}