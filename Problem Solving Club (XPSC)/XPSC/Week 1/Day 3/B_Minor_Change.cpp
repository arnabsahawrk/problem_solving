#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    int ans = 0;

    for (int i = 0; i < s.size(); i++)
        if (s[i] != t[i])
            ans++;

    cout << ans << endl;

    return 0;
}