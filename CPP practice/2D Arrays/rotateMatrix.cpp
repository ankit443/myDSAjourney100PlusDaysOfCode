#include<iostream>
#include<bits/stdc++.h>
#include<vector>

//this is an inaccurate code. unrealiable.

using namespace std;

//function for the rotation of image problem
void rotate(vector<vector<int>>& matrix){

    // int row = 0;
    // int col = 0;

    int row = matrix.size();
    // int m = matrix[0].size();

    for(int i=0; i<row; i++ ){
        for(int j=0; j<=i; j++){
            swap(matrix[i][j],  matrix[j][i]);
        }
    }for( int i=0; i<row; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }


}

int main(){

    vector<int> matrix;

    int numRows, numCols;

    cout<<"Enter the number of rows: ";
    cin>>numRows;

    cout<<"Enter the number of columns: ";
    cin>>numCols;


    vector<vector<int>> matrix(vector<int>(numRows), vector<int>(numCols));

    //input matrix elements
    cout<<"Enter the matrix elements: "<<endl;

    for( int i=0; i<numRows; i++){
        for(int j=0; j<numCols; j++){
            cin>>matrix[i][j];
        }
    }


    //display the matrix elements


    cout<<"Matrix elements: "<<endl;
    for(int i=0; i<numRows; i++){
        for(int j=0; j<numCols; j++){
            cout<<matrix[i][j]<<" ";
        }
    }

    cout<<"rotated matrix be like: "<<rotate(matrix)<<endl;

    return 0;




}