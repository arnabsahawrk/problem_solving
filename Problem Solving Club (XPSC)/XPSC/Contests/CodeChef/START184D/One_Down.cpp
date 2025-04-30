/*   Author: Arnab Saha  Date: 04/30/2025 [21:01:36]   */
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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    bool flag = false;
    ll diff = 0;
    rep(i, 0, n)
    {
        if (s[i] != t[i])
        {
            if (s[i] == '1')
                diff++;
            else
            {
                flag = true;
                break;
            }
        }
    }

    if (flag)
        no;
    else
    {
        if (diff % 2 == 0)
            yes;
        else
            no;
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