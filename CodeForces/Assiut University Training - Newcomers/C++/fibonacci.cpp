#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, prev = 0, next = 1, fib = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            fib += prev;
        else if (i == 2)
            fib += next;
        else
        {
            fib = prev + next;
            prev = next;
            next = fib;
        }
    }

    cout << fib;

    return 0;
}