#include <iostream>
using namespace std;

int getMin(int num[], int n)
{
    int min = INT_MAX; //to remember we have to declare int min variable as INT_MAX and vice versa


    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    // returning Min
    return min;
}

int getMax(int num[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    // returning max value
    return max;

    // INT_MIN stores the minimum value and INT_MAX stores the maximum value
}

int main()
{

    int size;
    cin >> size;

    // int num[size];
    // dont put variable name : thats bad practice, rather use int value in declaring an array

    int num[100]; 

    // In C++, the compiler must know the amount of memory to allocate for an array at compile time. However, the value of a variable is not known until run time. This is why you are not allowed to use a variable for the size of an array.

    // taking input for array elements
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "maximum value is " << getMax(num, size) << endl;
    cout << "minimum value is " << getMin(num, size) << endl;

    return 0;
}