#include<iostream>
#include<bits/stdc++.h>


//write an efficient algorithm thaht searches for a target value in an mXn integer matrix. the matrix has the following properties: 

// - integers in each row are sorted n ascending order from left to right 
// - integers in each column are sorted in ascending from top to 
using namespace std;

bool searchMatrixLevel2(vector<vector<int>>& matrix, int target){

    int row = matrix.size();
    int col=matrix[0].size();

    int rowIndex=0;
    int colIndex=col-1;

    while(rowIndex<row && colIndex>=0){
        int element=matrix[rowIndex][colIndex];

        if(element==target){
            return 1;
        }if(element<target){
            rowIndex++;
        }else{
            colIndex--;

        }
    }
    return 0;

}

int main(){


    return 0;

}