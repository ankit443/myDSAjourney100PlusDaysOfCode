#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    cout<<"Printing the array";
  
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }

      cout<<"Printing is done";

}

int main()
{

    cout<<"Working with arrays here"<<endl;


    //initial
    cout<<"Enter the size of array: ";

    int N;
    cin>>N;

    int arrayOne[N];

    printArray(arrayOne, N);
}

// 37:57