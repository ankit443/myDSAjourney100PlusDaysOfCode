#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //decalring ans;
        vector<int> ans;

        //declaring unordered_map for searching elements and indices
        unordered_map<int, int> map;

        //for loop for iteration
        for(int i=0; i<nums.size(); i++){
            if(map.find(target-nums[i]) != map.end()){
                ans.push_back(map[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            map[nums[i]] = i;
        }
        return ans;
        
    }
};

int main(){





    return 0;
}