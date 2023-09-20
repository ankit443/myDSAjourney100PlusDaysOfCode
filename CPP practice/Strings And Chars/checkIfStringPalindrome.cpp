#include <iostream>
#include <bits/stdc++.h>

//This problem is not case sensitive 

using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a'; //game os ASCII Value for uppercase to lowercase Case
        // char temp = ch - 'a' + 'A' game of ASCII Value for lowercase to
        return temp;
    }
}


int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

bool checkPalndrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }

    return 1;
}




int main()
{
    char name[100];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is: ";
    cout << name << endl;

    int len = getLength(name);
    cout << "Length: " << len << endl;
    reverse(name, len);
    cout << "your name is: ";
    cout << name << endl;

    cout << " Palindrome or not: " << checkPalndrome(name, len) << endl;

    cout<<"Character is: "<<toLowerCase('b')<<endl;
    cout<<"Character is: "<<toLowerCase('C')<<endl;

    return 0;
}