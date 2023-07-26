#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findDupes(vector<int> &arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5}; // Contains duplicate element 5

    // Calling the findDupes function
    int duplicateElement = findDupes(arr);

    cout << "The duplicate element is: " << duplicateElement << endl;

    return 0;
    
}
