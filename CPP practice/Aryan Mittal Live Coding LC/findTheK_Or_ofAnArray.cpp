#include<iostream>
#include<bits/stdc++.h>

//question: we are given a 0 indexed integer array nums and integer k. The K or of nums is a non negative integer that satisfies the following: the ith bit is set in the K-or if an only if there are atleast k elements of nums in which bit i is set. Return the K-or of nums. Note that: a bit of i is set in x if (2 to the power i AND x)==2 to the power i AND is btiwise operator AND.

using namespace std;

//code function
int findKOr(vector<int>& nums, int k){
    int ans=0;


    //go to every bit - 0 to 31
    //for every bit - we will go onto every number
    //if that bit is set - count++ and then the count is >= k, include that bit in answer too.
    

    for(int i=0; i<=31; i++){
        int count=0;

        for(auto el: nums){
            // how to know if the bit is set or not
            if((el && (1<<i))){ //if ith bit is set in el
                count++;
            }

            if(count>=k){
                ans+=(1<<i); //1 left shift i to return the ith bit here as well
            }
        }

        return ans;
    }
}



int main(){
    

    return 0;
}