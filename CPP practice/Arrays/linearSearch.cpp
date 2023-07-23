#include <iostream>
using namespace std;

//linear search

bool hasElement(int arr[], int size, int key)

{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    cout << "Working with linear search" << endl;

    int N; // size of array
    cout << "Enter size: ";
    cin >> N;

    int arr[100];

    cout << "Enter the elements: ";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element value: ";
    int K;
    cin >> K;

    bool gotElement = hasElement(arr, N, K);

    if (gotElement)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }
}