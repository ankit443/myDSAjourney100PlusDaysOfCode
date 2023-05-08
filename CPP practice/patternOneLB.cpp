#include <iostream>

using namespace std;

int main()
{
    // drawing a pattern, easy level

    cout << "enter the number for rows and columns for pattern";

    int n;
    cin >> n;
    // nested loop
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}