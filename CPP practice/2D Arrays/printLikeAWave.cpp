#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){

    vector<int> answer;
    for(int col=0; col<mCols; col++){
        if(col&1){

            //odd Index => Bottom to top
            for(int row = nRows-1; row>=0; row--){
                cout<<arr[row][col]<<" ";
                answer.push_back(arr[row][col]);
            }

        }else{

            // 0 or even Index - top to Bottom
            for(int row = 0; row<nRows; row++){
                cout<<arr[row][col]<<" ";
                answer.push_back(arr[row][col]);


            }

        }
    }

    return answer;



}

int main(){

    int rows = 3;
    int cols = 3;


    vector<vector<int>> vectorArray(rows, vector<int>(cols));

   //input elements for 2D array:

   cout<<"Enter the elements for the 2D vector array: "<<endl;
   for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>vectorArray[i][j];
    }
   }


   //print the elements in the 2D array
   for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<vectorArray[i][j]<<" ";
    }

    cout<<endl;
   }


    //fix the issue for not being able to execute code in main function 
   

//    cout<<"Printing the sum in a wave: "<<wavePrint(vectorArray, 3, 3)<<endl;


    return 0;
}