#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(a==0){
        return b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }

    return a;
}

int main()
{

    int a, b;
    cin >> a >> b;

    int ans = gcd(a, b);

    cout << "gcd of " << a << " & " << b << " is: " << ans << endl;
}