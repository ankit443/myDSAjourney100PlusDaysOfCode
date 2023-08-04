#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int lastOcc(int arr[], int size, int key){
    int s = 0, e = size-1;
    int mid = s+(e-s)/2;

    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){

        }else if (arr[mid]<key){
            

        }else if (arr[mid] > key){

        }
    }
}

int firstOcc(int arr[], int size, int key)
{
    int ans = 1;
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            // since key is bigger than mid value, so we'll move to the right part
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{

    int even[5] = {1, 2, 3, 3, 5};

    cout << "First Occurrence of 3 is at Index " << firstOcc(even, 5, 3) << endl;

    return 0;
}