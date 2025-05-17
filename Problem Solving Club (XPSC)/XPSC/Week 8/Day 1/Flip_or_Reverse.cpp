/*   Author: Arnab Saha  Date: 05/17/2025 [19:10:28]   */
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
    ll n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    ll i = 0;
    vector<pair<ll, pll>> ans;
    while (i < n)
    {
        if (a[i] == b[i])
        {
            i++;
            continue;
        }

        if (i + 1 == n || b[i + 1] == a[i + 1])
        {
            ans.pb({1, {i + 1, i + 1}});
            i++;
            continue;
        }

        if (a[i] == a[i + 1])
        {
            ans.pb({1, {i+1, i + 2}});
            i += 2;
        }
        else
        {
            ans.pb({2, {i+1, i + 2}});
            i += 2;
        }
    }

    out(sz(ans));
    each(x, ans) cout << x.first << " " << x.second.first << " " << x.second.second << endl;
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