#include <iostream>
using namespace std;

void update(int arr[], int size)
{

    // inside the function
    cout << "inside the function" << endl;

    //updating array element value here
    arr[0] = 120;
    

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "going back to main function ";
}

int main()
{

    int arr[3] = {1, 2, 3};

    update(arr, 3);

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}