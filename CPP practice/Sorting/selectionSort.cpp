#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        { // why this loop? because we are starting after ith term. because we are comparing next values with out minIndex to the right side of the array

            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
}

// selection sort has an important factor of the minIndex part
//  selection sort has time complexity of n^2 because when we compare the loop of our for loop with N
//  that is for(int i=0; i<n-1; i++), that means, it goes from 0 + 1 + 2 + ... (n-2) + (n-1) that means we have a formula for this n(n-1)/2 which is equal to n2-n/2 therefore it is big O(n2) time complexity