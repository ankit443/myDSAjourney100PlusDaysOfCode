#include <iostream>
#include <bits/stdc++.h>
#include <string>

// tip: why do we need to specify the column size when we are passing a 2D array aas a parameter? Answer:  When passing a two-dimensional array to a function, you must specify the number of columns as a constant when you write the parameter type, so the compiler can pre-calculate the memory addresses of individual elements.

using namespace std;

//to print row wise sum
void printSum(int arr[][4], int row, int col ){
    cout<<"Printing sum from rows: "<<endl;

    int sum = 0;


    for(int row = 0;row<3; row++){
        for(int col=0; col<4; col++){
            sum+=arr[row][col];

        }cout<<sum<<" ";
        
        

    }



}

bool isPresent(int arr1[][4], int target, int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr1[row][col] == target)
            {
                return 1;
            }
        }
    }

    return 0; // false
}

int main()
{

    // init create 2D array
    int arr1[3][4];
    cout << "Enter the element to search: " << endl;

    int target;
    cin >> target;

    // creating input for 2D array
    cout << "Enter elements for 2D Array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // output for 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr1[i][j] << ' ';
        }
        cout << endl;
    }

    printSum(arr1, 3, 4);

    if (isPresent(arr1, target, 3, 4))
    {
        cout << "Element has been found! " << endl;
    }
    else
    {
        cout << "not found! " << endl;
    }

    return 0;
}