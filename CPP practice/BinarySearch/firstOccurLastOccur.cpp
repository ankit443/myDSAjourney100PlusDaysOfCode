#include <iostream>
#include <bits/stdc++.h>

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

    int even[9] = {1, 2, 3, 3, 3, 3, 3, 3, 5};

    cout << "First Occurrence of 3 is at Index " << firstOcc(even, 9, 3) << endl;
    cout<< "Last Occurrence of 3 is at Index "<<lastOcc(even, 9, 3)<<endl;

    return 0;
}