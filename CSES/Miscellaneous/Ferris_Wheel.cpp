/*   Author: Arnab Saha  Date: 05/20/2025 [19:29:29]   */
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
#define sz(x) x.size()
#define all(v) (v).begin(), (v).end()
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)
#define endl '\n'
#define out(x) cout << x << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, x;
    cin >> n >> x;

    multiset<ll> ml;
    rep(i, 0, n)
    {
        ll k;
        cin >> k;
        ml.insert(k);
    }
    ll count = 0;

    while (!ml.empty())
    {
        auto it = ml.begin();
        ll p = *it;
        ml.erase(it);

        if (ml.empty())
            count++;
        else
        {
            ll w = x - p;
            it = ml.upper_bound(w);

            if (it == ml.begin())
            {
                count++;
            }
            else
            {
                it--;
                p += *it;

                if (p <= x)
                {
                    count++;
                    ml.erase(it);
                }
                else
                    count++;
            }
        }
    }

    out(count);
}

int main()
{
    fast_IO;

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    return 0;
}