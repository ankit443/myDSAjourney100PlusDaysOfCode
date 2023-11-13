#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int getSum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    return sum;
}

int main(){
    char ch = 'q';
    cout<<sizeof(ch)<<endl; //character 1 byte ka hai toh answer 1 aayga

    char * c = &ch;
    cout<<sizeof(c)<<endl; //character heap memory mein 8 byte ka hai toh answer 8 hoga


    //variable size array creation
    int n;
    cin>>n;
    int* arr = new int[n]; //var ize arr

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    int ans = getSum(arr, n);
    cout<<"answer is: "<<ans;


    //difference between static and dynamic memory allocation

    // static: int arr[50] && memory of this: 50x4 = 200 bytes (1 integer is 4 bytes)
    // dynamic: int *arr = new int[50]; && memory of this: 50x4 = 200 bytes in heap + 8 bytes from stack 

    // facts : while(1) means it will always run since it's true. while(true) does the same thing






    return 0;
}