/*   Author: Arnab Saha  Date: 05/03/2025 [02:07:08]   */
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

    string s, t;
    cin >> s >> t;

    ll z = 0, o = 0, diff = 0;

    rep(i, 0, n)
    {
        if (s[i] == t[i])
        {
            if (s[i] == '0')
                z++;
            else
                o++;
        }
        else
            diff++;
    }

    (z % 2) + (o % 2) + (diff % 2) <= 1 ? yes : no;
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