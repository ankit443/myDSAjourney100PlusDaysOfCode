#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int power(int n){

    //base case
    if(n==0) return 1;

    //recursive relation
    int small = power(n-1);
    int big = 2*small;

    return big;



}

int main(){

    int n;
    cout<<"Enter the power for 2: "<<endl;
    cin>>n;

    int ans = power(n);
    cout<<ans<<endl;





    return 0;
}