#include<iostream>

using namespace std;

int main(){{


    char ch;
    cin>> ch;
    if (ch == 'a' || ch == 'z'){
        cout<<"This is lowercase";

    }
    else if(ch=='A'|| ch=='Z'){
        cout<<"This is uppercase";
    }
    else if(ch==0 || ch==9){
        cout<<"This is numeric";

    }

    else{
        cout<<"invalid input";
    }






}}