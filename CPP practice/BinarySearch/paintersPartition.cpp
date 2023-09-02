#include<iostream>
#include<bits/stdc++.h>   
using namespace std;

//problem statement:

//given an array/list of length N where the array/lst represents the boards and each element of the given array/list represents the length of each board. Some 'K' numbers of painters are available to paint these boards. Consider the each unit of a board takes 1 unit of time to paint. 
//we are supposed to return the area of the minimum time to get this job done of painting all the N boards, under a constaint that any painter will only paint the continous section of boards
//example: 
// array/list elements are: 2 1 5 6 2 3

bool isPossibleAnswer(vector<int> &boards, int k, int mid){
    int painterCount = 1;
    int boardsCount = 0;

    for(int i=0; i<k; i++){
        if(boardsCount+boards[i]<=mid){
            boardsCount+=boards[i];
        }else{
            painterCount++;
            if(painterCount>k || boards[i] > mid){
                return false;
            }

            boardsCount =0;
            boardsCount +=boards[i];
        }
    }

    return true;

}



int findLargestMinDistance(vector<int> &boards, int k){

    int s =0;
    int sum =0;

    for(int i=0; i<k; i++){
        sum +=boards[i];

    }
    int e = sum;
    int ans =-1;

    int mid = s+(e-s)/2;

    while(s<e){
        if(isPossibleAnswer(boards, k, mid)){
            ans = mid;
            e=mid-1;
        }else{
            s=mid+1;

        }mid = s+(e-s)/2;
    }
    return ans;

}

int main(){


}