#include <bits/stdc++.h>
using namespace std;

bool sumOfNumbers(long long int x, long long int n)
{
    return x * (x + 1) / 2 <= n;
}

int main()
{
    long long int n;
    cin >> n;

    long long int l = 1, r = 1;

    while (sumOfNumbers(r, n))
        r *= 2;

    while (l + 1 < r)
    {
        long long int m = l + (r - l) / 2;

        if (sumOfNumbers(m, n))
            l = m;
        else
            r = m;
    }

    cout << l << endl;

    return 0;
}