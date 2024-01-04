#include <iostream>
#include <vector>
#include <bits/stdc++.h>

#include <algorithm>

using namespace std;
void print(int arr[], int s, int e)
{
    for (int i = 0; i <= e; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;
}

bool binarySearch(int *arr, int s, int e, int key)
{

    cout<<endl;
    print(arr, s, e);
    // base case - for element not found
    if (s > e)
        return -1;

    // processing part
    int mid = s + (e - s) / 2;

    // 2nd base case - for element found
    if (arr[mid] == key)
        return true;

    if (arr[mid] < key)
    {
        binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 16};
    int size = 6;
    int key = 18;

    cout << "present or not: " << binarySearch(arr, 0, 5, key);

    return 0;
}