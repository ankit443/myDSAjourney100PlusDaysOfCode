#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countPrimes(int n)
{

    int count = 0;

    int a[n + 1];
    for (int i = 0; i <= n; i++)
    {
        a[i] = 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i + i; j <= n; j += i)
        {
            a[j] = 1;
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (a[i] == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    return 0;
}