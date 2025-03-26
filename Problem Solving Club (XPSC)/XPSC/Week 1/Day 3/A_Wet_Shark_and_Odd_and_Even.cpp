#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long sum = 0;
    int minOdd = INT_MAX;

    while (n--)
    {
        int value;
        cin >> value;

        sum += value;

        if (value & 1)
            minOdd = min(minOdd, value);
    }

    if (sum & 1)
        cout << sum - minOdd;
    else
        cout << sum;

    return 0;
}