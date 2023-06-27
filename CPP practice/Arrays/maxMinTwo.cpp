#include <iostream>
using namespace std;


void getMax(int num[], int N){

    //function for getting the maximum value of an element in an array
    int max = INT_MIN;

    for(int i=0; i<N; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    

}

void getMin(int num[], int N){

    //function to get the minimum value of an element in an array
    int min = INT_MAX;

    for(int i=0; i<N; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
}

void printArray(int num[], int size)
{
    // function for printing the array elements
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;
    cout << "Printing is done" << endl;
}
int main()
{

    cout << "Working with arrays here." << endl;

    cout << "Enter the size of the array: ";
    int N;
    cin >> N;

    int num[N];

    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }

    printArray(num, N);

    return 0;
}