#include <iostream>
#include <bits/stdc++.h>
#include <vector>


using namespace std;

int lastOcc(int arr[], int size, int key)
{
    int ans = -1;
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
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

    
    int arr[9] = {1, 2, 3, 3, 3, 3, 3, 3, 5};

    int totalOccurences = (lastOcc(arr, 9, 3) - firstOcc(arr, 9, 3)) + 1;
    cout<<totalOccurences;



}