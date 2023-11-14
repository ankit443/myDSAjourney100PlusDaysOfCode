#include<iostream>

using namespace std;

//reach nth stair

int countN(long long n){

    //base case
    if(n<0){
        return 0;
    }

    if(n==0){
        return 1;
    }


    //recursive relation
    int ans= countN(n-1) + countN(n-2);
    return ans;
}

int main(){

    long long n;
    cin>>n;

    

    cout<<countN(n)<<endl;



    return 0;
}