#include <iostream>
using namespace std;

void printArray(int num[], int size)
{

    // function for printing array
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }

    cout << "Printing is done. " << endl;
}

int getMax(int num[], int size)
{

    // function to get maximum value element from an array
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, num[i]);
    }

    return maxi;
}

int main()
{

    cout << "Working with arrays" << endl;

    int N; // size of array
    cout << "Enter the size of array. Please keep in mind to keep integer below 100: ";
    cin >> N;

    int num[100];

    cout << "Enter the array elements: " << endl;

    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    printArray(num, N);

    cout<< "Maximum value is " <<getMax(num, N)<<endl;
}