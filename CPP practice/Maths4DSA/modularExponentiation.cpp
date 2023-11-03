#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int modularExp(int x, int n, int m)
{

    int res = 1;

    while (n > 0)
    {
        if (n & 1) // n&1 is expression for odd case
        {
            // odd case
            res = (1LL * (res) % m * (x) % m) % m;
        }

        (x) = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1; // here right shift twice means divide by 2(1 is important here)
    }

    return res;
}

int main()
{

    return 0;
}