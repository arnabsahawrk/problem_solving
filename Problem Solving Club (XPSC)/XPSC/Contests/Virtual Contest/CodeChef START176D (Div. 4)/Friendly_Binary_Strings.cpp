/*   Author: Arnab Saha  Date: 05/03/2025 [00:47:44]   */
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

    bool f = true;

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            f = false;
            break;
        }

        if (t[i] != t[j])
        {
            f = false;
            break;
        }
    }

    if (f)
    {
        yes;
        return;
    }

    f = true;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (s[i] != t[j])
        {
            f = false;
            break;
        }
    }

    if (f)
    {
        yes;
        return;
    }

    ll sZ = 0, sO = 0, tZ = 0, tO = 0;
    rep(i, 0, n)
    {
        if (s[i] == '0')
            sZ++;
        else
            sO++;

        if (t[i] == '0')
            tZ++;
        else
            tO++;
    }

    if ((((sZ % 2 != 0) && (sO % 2 == 0)) || (sZ % 2 == 0) && (sO % 2 != 0)) && (((tZ % 2 != 0) && (tO % 2 == 0)) || (tZ % 2 == 0) && (tO % 2 != 0)))
        no;
    else
        yes;
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