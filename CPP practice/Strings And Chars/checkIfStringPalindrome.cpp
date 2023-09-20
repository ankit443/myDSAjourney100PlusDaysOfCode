#include <iostream>
#include <bits/stdc++.h>

using namespace std;

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
        if (a[s] != a[e])
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

    return 0;
}