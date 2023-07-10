#include <iostream>

using namespace std;

int sum =0;

void printSum(int arr[], int size)
{
    for(int i=0; i<size; i++){
        sum += arr[i];
    }

    cout<<"Sum is "<<sum;

}

int main()
{
    cout << "Print the sum of all elements in the array" << endl;

    int N; // size of array
    cin >> N;

    int arr[100];

    // enter array elements
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    printSum(arr, N);
}