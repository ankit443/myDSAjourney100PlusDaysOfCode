#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void swapAdjacent(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int even[4] = {1, 2, 3, 4};
    int odd[5] = {9, 8, 7, 6, 5};

    swapAdjacent(even, 4);
    printArray(even, 4);
}