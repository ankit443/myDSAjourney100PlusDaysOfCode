#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    // creating a 2D array:
    int arr[3][4];

    // taking input for my 2D array, this is row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print the 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}