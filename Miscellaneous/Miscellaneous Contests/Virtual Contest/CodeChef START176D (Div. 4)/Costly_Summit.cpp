/*   Author: Arnab Saha  Date: 05/02/2025 [23:53:47]   */
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
    ll n, c;
    cin >> n >> c;

    string s;
    cin >> s;

    map<char, int> mp;
    each(x, s) mp[x]++;

    vll arr;
    each(x, mp) arr.eb(x.second);

    sort(all(arr));
    ll cost = 0, t = 1;

    rep(i, 0, arr.size())
    {
        ll x = 0;
        rep(j, 0, arr[i])
        {
            x += t;
            t++;
        }

        if (x < c)
            cost += x;
        else
            cost += c, t -= arr[i];
    }

    cout << cost << endl;
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