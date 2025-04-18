#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, a) for (auto &x : a)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    map<string, ll> mp;
    map<char, ll> mp2;
    map<char, ll> mp3;
    vector<string> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
        mp[v[i]]++;
        mp2[v[i][0]]++;
        mp3[v[i][1]]++;
    }

    ll ans = 0;
    rep(i, 0, n)
    {
        ans += max((ll)0, mp2[v[i][0]] - mp[v[i]]);
        ans += max((ll)0, mp3[v[i][1]] - mp[v[i]]);

        if (mp2[v[i][0]] > 0)
            mp2[v[i][0]]--;

        if (mp3[v[i][1]] > 0)
            mp3[v[i][1]]--;

        if (mp[v[i]] > 0)
            mp[v[i]]--;
    }

    cout << ans << endl;
}

int main()
{
    fast_io;

    int tc;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}