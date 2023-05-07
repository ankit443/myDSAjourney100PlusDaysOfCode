#include<iostream>

using namespace std;

int main(){

    //define three variables for the wonderful program
    int n, m, flag;
    cout<<"enter the number: ";
    cin>>n;
    flag=0;
    m=n/2;

    for(int i=2; i<=m; i++){
        if(n%i==0){
            cout<<n<<" is definitely not a prime number";
            flag==1;
            break;

        }

        if(flag==0){
            cout<<n<<" is a prime number";

        }

        return 0;
        
    }

}