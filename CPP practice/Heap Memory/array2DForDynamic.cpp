#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int** arr = new int*[n]; //created a 2D pointer for 2D array


    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }



    //creation done


    //taking input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];


        }
    }


    //taking output


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    // we have to release memory whenever we use Heap Memory in CPP. Java does it for you automatically but C++ won't. so take care.


    //releasing memory
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            delete []arr[i];
        }
    }
    delete []arr;
    
    return 0;
}