#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int firstOcc(int arr[], int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = 1;

    while(start<=end){
        if(arr[mid] == key){
            ans == mid;
            end = mid-1;

        }else if(arr[mid]<key){

        }else if(arr[mid]>key){

        }
    }

}

int main()
{

}