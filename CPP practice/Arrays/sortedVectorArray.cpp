#include<vector>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
        vector<int> arr(a, a+n); //converting array to vector
        //using sort function to sort the array
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n; i++){ //copying the sorted elements back to array
            a[i]=arr[i];
        }
    }
    
};