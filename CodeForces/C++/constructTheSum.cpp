#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, s, maxSum;
        cin >> n >> s;

        maxSum = n * (n + 1) / 2;

        if (maxSum < s)
        {
            cout << -1 << endl;
            continue;
        }
        long long temp = s;
        for (int i = n; i >= 1 && s > 0; i--)
        {
            if (s >= i && i != temp)
            {
                cout << i << " ";
                s -= i;
            }
        }

        if (s == 0)
            cout << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}