#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    v.assign(10, -1);

    for (auto x : v)
        cout << x << ' ';

    cout << '\n';

    return 0;
}