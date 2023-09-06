#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n){
    for(int i=1; i<n; i++){
        //for round 1 to n-1

        bool swapped = false;



        for(int j=0; j < n; j++){

            //process elements till n-i th index
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }

}


int main(){


}


// for optimising the code further, we have tried to introduce a boolean variable named swapped here which is initiated with false claim first and right after one value is swapped to the other in terms of the given conditions of the algorithm
// we have time complexity of n^2 here

// the swapped bool value was given because we are taking sorted arrays into consideration as well

