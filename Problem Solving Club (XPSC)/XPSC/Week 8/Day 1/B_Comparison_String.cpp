/*   Author: Arnab Saha  Date: 05/17/2025 [18:53:12]   */
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

    string s;
    cin >> s;

    ll mxL = 0, countL = 0, mxR = 0, countR = 0;
    rep(i, 0, n)
    {
        if (s[i] == '>')
        {
            mxL = max(mxL, countL);
            countL = 0;
            countR++;
        }
        else
        {
            mxR = max(mxR, countR);
            countR = 0;
            countL++;
        }
    }

    mxL = max(mxL, countL);
    mxR = max(mxR, countR);

    out((max(mxL, mxR) + 1));
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