/*   Author: Arnab Saha   Date: 04/24/2025 [22:39:55]   */
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
    ll n, k;
    cin >> n >> k;

    vll a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    bool flag = false;
    ll foundDigit = 0;
    rep(i, 0, n)
    {
        cin >> b[i];

        if (b[i] != -1)
        {
            flag = true;
            foundDigit = b[i] + a[i];
        }
    }

    if (flag)
    {
        bool ok = true;
        rep(i, 0, n)
        {
            if (b[i] == -1)
            {
                if (abs(foundDigit - a[i]) > k)
                {
                    ok = false;
                    break;
                }
            }
            else
            {
                if (a[i] + b[i] != foundDigit)
                {
                    ok = false;
                    break;
                }
            }
        }

        if (ok)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else
        cout << 7 << endl;
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