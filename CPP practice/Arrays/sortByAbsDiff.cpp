#include<vector>
#include<iostream>
#include<bits/stdc++.h>



//sorting by absolute difference
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        
        int low=0;
        int high=n-1;
        int current=0;
        
        while(current<=high){
            if(a[current]==0){
                swap(a[low], a[current]);
                low++;
                current++;
            }
            
            else if(a[current]==2){
                swap(a[current], a[high]);
                high--;
                
            }
            
            else{
                current++;
            }
        }
    }
    
};