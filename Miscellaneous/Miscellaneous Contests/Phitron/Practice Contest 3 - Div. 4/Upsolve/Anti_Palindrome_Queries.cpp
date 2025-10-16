/*   Author: Arnab Saha  Date: 04/29/2025 [23:57:35]   */
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
#define fo(i, n) for (int i = 0; i < n; ++i)
#define each(x, a) for (auto &x : a)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define fst first
#define snd second

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, q;
    cin >> n >> q;

    vll a(n + 1), prefOne(n + 1), prefTwo(n + 1), prefThree(n + 1);
    rep(i, 1, n+1)
    {
        cin >> a[i];

        prefOne[i] = prefOne[i - 1] + (a[i] == 1);
        prefTwo[i] = prefTwo[i - 1] + (a[i] == 2);
        prefThree[i] = prefThree[i - 1] + (a[i] == 3);
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        ll len = r - l + 1;
        if (len % 2 == 1)
        {
            no;
            continue;
        }

        ll half = len / 2;

        ll cnt1 = prefOne[r] - prefOne[l - 1];
        ll cnt2 = prefTwo[r] - prefTwo[l - 1];
        ll cnt3 = prefThree[r] - prefThree[l - 1];

        max({cnt1, cnt2, cnt3}) == half ? yes : no;
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