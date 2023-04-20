#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    // checking if a number is Prime number or not
    int n; // n is the given number
    int flag = 0;
    int m = 0;

    cout << "Enter a positive number: ";
    cin >> n;

    m = n / 2;
    for (int i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout << "number is not prime ";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << n << " is a prime number";
    }

   
    return 0;
}