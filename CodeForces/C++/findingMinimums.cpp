#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int minimum = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x < minimum)
            minimum = x;

        if (i % k == 0)
        {
            cout << minimum << " ";
            minimum = INT_MAX;
        }
        else if (i == n)
            cout << minimum;
    }
    return 0;
}