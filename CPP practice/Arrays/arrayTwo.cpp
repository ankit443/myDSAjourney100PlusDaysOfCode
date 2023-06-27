#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{

    cout << "Printing the array using printArray Function" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;

    cout << "Printing is done";
}

int main()
{

    cout << "Working with arrays" << endl;

    int N;
    N = 5;
    int arrayOne[N] = {1, 2, 3, 4, 5};

    printArray(arrayOne, N);
}