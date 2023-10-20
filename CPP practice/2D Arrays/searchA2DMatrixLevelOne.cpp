#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    // vector<vector<int>> matrix;

    int rows, cols;
    cin >> rows;
    cin >> cols;
    cout << endl;

    vector<vector<int>> matrix(vector<int>(rows), vector<int>(cols));

    cout << "Enter matrix elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int i = 0; i < cols; i++)
        {
            cin >> matrix[i][j];
        }
    }

    // print
    cout << "Enter matrix elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int i = 0; i < cols; i++)
        {
            cout >> matrix[i][j]<<" ";
        }
    }

    return 0;
}