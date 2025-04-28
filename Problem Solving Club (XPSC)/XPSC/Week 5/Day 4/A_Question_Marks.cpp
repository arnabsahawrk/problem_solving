/*   Author: Arnab Saha  Date: 29/04/2025 [02:04:19]   */
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

    map<char, ll> mp;
    rep(i, 0, n * 4) mp[s[i]]++;

    ll score = 0;

    if (mp['A'] >= n)
        score += n;
    else
        score += mp['A'];

    if (mp['B'] >= n)
        score += n;
    else
        score += mp['B'];

    if (mp['C'] >= n)
        score += n;
    else
        score += mp['C'];

    if (mp['D'] >= n)
        score += n;
    else
        score += mp['D'];

    cout << score << endl;
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