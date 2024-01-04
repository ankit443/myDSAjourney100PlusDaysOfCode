#include<iostream>

using namespace std;

void sortArray(int *arr, int size){
    //base case
    if(size==0 || size ==1) return ;


    //solving a single case - will take us to largest element
    for(int i=0; i<size-1; i++){ //made sure that it's n-1 because we're using i+1 here, if we didn't then we'd be out from the last element
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }


    sortArray(arr, size-1);
    
}

int main(){

    //bubble sort using recursion


    int arr[5] = {10, 2, 5, 6, 9};
    sortArray(arr, 5);


    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}