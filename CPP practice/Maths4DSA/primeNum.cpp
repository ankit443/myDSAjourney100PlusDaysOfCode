#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "it's a prime number" << endl;
    }
    else
    {
        cout << "not a prime number" << endl;
    }

    return 0;
}