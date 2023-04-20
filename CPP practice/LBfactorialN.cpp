#include <bits/stdc++.h>
using namespace std;

// in this program we are going to find factorials of numbers
//  we will also clear the difference between the increments such as i++ and ++i
//  ++i is called the prefix verison: the value of i is incremented, and the value of the expression is the new value of i. so basically it first increments and then assigns a value to the expression

// i++ is called the postfix version: the value of i is incremented but the value of the expression is the original value of i. so basically, it first assigns a value of  to expression and then increments the variable

int main()
{

    int n;
    long factorial = 1.0;

    cout << "Enter a postive number: ";
    cin >> n;
    if (n < 0)
    {
        cout << "Invalid input.";
    }

    else
    {
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << "factorial of " << n << " is " << factorial;
    }

    return 0;
}

