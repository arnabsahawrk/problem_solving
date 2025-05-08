/*   Author: Arnab Saha  Date: 05/07/2025 [10:42:28]   */
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

    ll o = 0, e = 0, mo = 0;
    vll v;
    rep(i, 0, n)
    {
        ll x;
        cin >> x;

        if (x & 1)
            o++, mo = max(mo, x);
        else
            e++, v.eb(x);
    }

    if (o == 0 || e == 0)
        cout << 0 << endl;
    else
    {
        sort(all(v));
        n = v.size();
        ll ans = n;

        rep(i, 0, n)
        {
            if (v[i] > mo)
            {
                ans += 1;
                break;
            }

            mo += v[i];
        }

        cout << ans << endl;
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