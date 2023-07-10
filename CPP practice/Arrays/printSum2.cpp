#include <iostream>
using namespace std;

int main() {
  // initialise array
//   int arr[] = {2, 4, 6, 8};
//   int size = 4;

  int N; // size of array
    cin >> N;

    int size = N;
    

    int arr[100];

    // enter array elements
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }




  // initialise sum to zero
  int sum = 0;

  // for loop runs from 0 to size - 1
  for(int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }

  cout << "The sum of the elements in the array: " << sum;
}