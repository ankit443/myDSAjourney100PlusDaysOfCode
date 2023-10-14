#include <iostream>
#include <vector>

using namespace std;

bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int q = *min_element(numbers.begin(), numbers.end());
    long long p = q;

    while (true)
    {
        bool valid = true;
        for (int i = 0; i < n; i++)
        {
            if (numbers[i] != q && p % numbers[i] != q)
            {
                valid = false;
                break;
            }
        }

        if (valid && isPrime(p))
        {
            cout << p << endl;
            break;
        }

        p++;
    }

    return 0;
}