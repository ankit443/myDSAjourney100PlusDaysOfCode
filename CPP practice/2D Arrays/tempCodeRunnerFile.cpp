#include <iostream>

using namespace std;

void largestSumRow(int arr[][], int row, int col)
{

    int maxi = INT_MAX;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout<<"The maximum sum is: "<<maxi<<endl;
    return rowIndex;

}

int main()
{

    // init
    int arr1[3][3];

    // taking input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // printing output of 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0lj < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }


    int answerIndex = largestSumRow(arr1, 3, 3);

    //finding the largestSumRow
    cout<<"Max row is at index: "<<answerIndex<<endl;

    return 0;
}