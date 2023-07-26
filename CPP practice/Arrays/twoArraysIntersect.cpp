// You are given two arrays 'A' and 'B' of size 'N' and respectively. Both these arrays are
// sorted in non-decr?asing order. You have to find the intersection of these two arrays.
// Intersection of two arrays is an array that consists of all the common elements occurring in
// both arrays.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m){

    vector<int> ans;


    for(int i=0; i<n; i++){
        int element = arr1[i];


        for(int j=0; j<m; j++){
            if(element==arr2[j]){
                ans.push_back(element);
                arr2[j] = -12232 ;
                break;

            }
        }
    }
    return ans;
}

int main(){

}