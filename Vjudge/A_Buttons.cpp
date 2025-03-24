#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a == b)
        cout << a + b << endl;
    else
        cout << max(a, b) + max(a, b) - 1 << endl;

    return 0;
}