#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<string> s;

    s.push("Ankit");
    s.push("Deb");

    cout<<"Top element: "<<s.top()<<endl;

    s.pop();
         cout<<"Top element: "<<s.top()<<endl;


    cout<<"Size of Stack"<<s.size()<<endl;
    cout<<"Empty or not"<<s.empty()<<endl;
    

}