#include<iostream>
using namespace std;

int findUnique(int *arr, int N){
    int ans = 0;

    for(int i=0; i<N; i++){
        ans = ans^arr[i];
    }

    return ans;
}

void printArray(int arr[], int size){

    cout<<"The user input array is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){

    // cout<<"Enter array: ";
    int N;//size of array
    int arr[100];
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }cout<<endl;

    findUnique(arr, N);
    

}