#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    if (q * 10 <= n)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}