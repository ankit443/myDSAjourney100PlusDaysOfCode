#include<iostream>

using namespace std;

int main(){
    //declare the integers int n, m, flag;

    int n, m, flag;
    flag=0;
    cout<<"Enter the number: ";
    cin>>n;
    m=n/2;

    if(m==0){
        for(int i=0; i<n; i++){
            cout<<n<<" is definitely not a prime number";
            flag=1;
            break;
        }
    }

    if(flag==0){
        cout<<n<<" is definitely a prime number";
        
    }
}