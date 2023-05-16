#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the value of N: ";
    int n;
    cin >> n;

    int i = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}