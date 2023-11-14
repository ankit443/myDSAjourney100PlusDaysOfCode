#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void sayDigits(int n, string arr[])
{

    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n = n / 10;

    // recursive call
    sayDigits(n, arr);
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "nine"};

    int n;
    cin >> n;

    cout << endl;
    sayDigits(n, arr);
    cout << endl;

    return 0;
}