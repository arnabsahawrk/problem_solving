#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        long long temp = l;
        l = min(l, r);
        r = max(temp, r);

        long long leftSum = ((l - 1) * ((l - 1) + 1)) / 2;
        long long rightSum = (r * (r + 1)) / 2;
        cout << rightSum - leftSum << endl;
    }

    return 0;
}