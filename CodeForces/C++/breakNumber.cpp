#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long x, max = INT_MIN;

    while (t--)
    {
        cin >> x;
        int count = 0;

        while (x % 2 == 0)
        {
            count++;
            x /= 2;
        }

        if (max <= count)
            max = count;
    }

    cout << max;

    return 0;
}