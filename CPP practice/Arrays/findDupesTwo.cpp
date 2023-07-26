#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// making a function for dupes
int findDupes(vector<int> arr)
{

    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];

    }

    for(int i=0; i<arr.size(); i++){
        ans=ans^i;
    }

    return ans;
}

int main()
{

    // calling a vector
    vector<int> arr = {1, 2, 3, 4, 5, 5};

    int dupesTwo = findDupes(arr);

    cout<<"The duplicate here is: "<<dupesTwo<<endl;
}