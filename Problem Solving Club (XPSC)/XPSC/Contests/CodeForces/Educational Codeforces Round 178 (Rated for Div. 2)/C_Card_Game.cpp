/*   Author: Arnab Saha  Date: 28/04/2025 [22:26:17]   */
#include <bits/stdc++.h>
using namespace std;

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fi first
#define se second

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int B = 0;
    rep(i, 0, n) if (s[i] == 'B')
        B++;

    if (n == 2)
    {
        if (s[0] == 'B')
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
    else
    {
        if ((s[0] == 'A' && s[n - 1] == 'A') || (s[n - 1] == 'A' && s[n - 2] == 'A') || (B == 1))
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
}

int main()
{
    fast_IO;

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}