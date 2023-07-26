#include<iostream>
#include<bits/stdc++.h>


//cpp program to find all the duplicates in an array/vector

using namespace std;

vector<int> findDupes(vector<int> &nums){
    vector<int> result;


    for(int n: nums){
        n = abs(n);
        if(nums[n-1] > 0){
            nums[n-1] *= -1;

        }else{
            result.push_back(n);
        }
    } return result;
}

