#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void insertionSort(vector<int> &arr, int n){
    

    for(int i=1; i<n; i++){
        int temp = arr[i];
        for(int j=i-1; j>=0; j--){

            if(arr[j] > arr[temp]){
                //shift 
                arr[j+1] = arr[j];
            }else{
                //stop here
                break;
            }

        }
    }
}

int main(){

}

//time complexity of this algorithm is O(n^2) 
// it is an adaptable and stable algorithm
