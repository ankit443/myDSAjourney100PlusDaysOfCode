#include <iostream>

using namespace std;

int findMin(int arr[], int i, int j)
{

    int minPos;
    if (i == j)
        return i;

    minPos = findMin(arr, i + 1, j);

    if (arr[i] < arr[minPos])
    {
        minPos = i;
    }

    return minPos;
}

void recursionSelectSort(int arr[], int len1, int pos1)
{

    int temp, minPos1;

    if (pos1 == len1)
        return;

    minPos1 = findMin(arr, pos1, len1 - 1);

    if (minPos1 != pos1)
    {
        temp = arr[pos1];

        arr[pos1] = arr[minPos1];
        arr[minPos1] = temp;
    }

    recursionSelectSort(arr, len1, pos1 + 1);
}

int main()
{
    int arr[] = {1, 5, 3, 0, 9, 3, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    recursionSelectSort(arr, length, 0);
    cout << "Sorted Array using recursive Selection sort: " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}