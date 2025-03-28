#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int minV = INT_MAX;

    while (n--)
    {
        int x;
        cin >> x;

        minV = min(abs(x), minV);
    }

    cout << minV;

    return 0;
}