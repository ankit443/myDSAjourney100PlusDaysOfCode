#include<iostream>

using namespace std;

int main(){


    int num=5;

    cout<<num;




    //address of operator
    cout<<"address of num is: "<<&num<<endl;
    //address is in format of hexadecimal format

    //so pointer here stores the address of the input/variable

    int *ptr = &num; //we created a pointer, and put the address there

    cout<<"Value is: "<<*ptr<<endl;

    double d = 4.32;

    double *p = &d;

    cout<<"Value of d is: "<<*p<<endl;
    cout<<"Address of d is: "<<p<<endl;



    cout<<"Size of integer is: "<<sizeof(num)<<endl; // 4 byte
    cout<<"Size of pointer is: "<<sizeof(ptr)<<endl; // 8 byte

    cout<<"Size of double is: "<<sizeof(d)<<endl;


    int i = 6;
    int *q = &i; //stores the value 6 in a pointer q


    cout<<*q<<endl; //gives value 6 as output
    cout<<q<<endl; //gives address value of where i is stored

    //another concept for Pointer Arithmetics
    //important concept
    i=3;
    int *t = &i;
    // cout<<(*t)++<<endl;

    *t = *t + 1;
    cout<<*t<<endl;
    // t= t+1; //4 byte piche 




    return 0;
}