#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void print(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";


    }cout<<endl;
}

void reverseArrayWithM(vector<int> &arr, int m){
    int s = m+1, e = arr.size()-1;

    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;

    }
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int m = 4;

    cout<<"Printing the reversed array from Mth term: ";
    reverseArrayWithM(arr, m);
    print(arr, 6);


    return 0;


}