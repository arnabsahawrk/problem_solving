/*   Author: Arnab Saha  Date: 05/04/2025 [02:31:16]   */
#include <bits/stdc++.h>
using namespace std;

#define fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define ld long double
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define eb emplace_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;

    if (n == 1)
        if (a[0] == c[0] || b[0] == c[0])
            no;
        else
            yes;
    else
    {
        ll cnt = 0;

        rep(i, 0, n)
        {
            if (a[i] == c[i] || b[i] == c[i])
                cnt++;
        }

        if (cnt == n)
            no;
        else
            yes;
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