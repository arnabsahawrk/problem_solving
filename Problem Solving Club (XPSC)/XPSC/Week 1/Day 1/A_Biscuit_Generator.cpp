#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;

    int produce = 0;

    for (int i = a; i <= t; i += a)
        produce += b;

    cout << produce << endl;

    return 0;
}