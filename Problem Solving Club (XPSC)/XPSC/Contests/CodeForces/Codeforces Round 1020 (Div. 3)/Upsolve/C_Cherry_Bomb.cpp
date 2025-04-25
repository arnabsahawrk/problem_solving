/*   Author: Arnab Saha   Date: 04/25/2025 [12:28:19]   */
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
    rep(i, 0, n)
    {
        cin >> a[i];
    }

    bool found = false;
    ll possibleSum = 0;
    rep(i, 0, n)
    {
        cin >> b[i];

        if (b[i] != -1)
        {
            found = true;
            possibleSum = a[i] + b[i];
        }
    }

    if (found)
    {
        bool flag = false;
        rep(i, 0, n)
        {
            if (b[i] == -1)
            {
                if (abs(possibleSum - a[i]) > k || a[i] > possibleSum)
                {
                    flag = true;
                    break;
                }
            }
            else if (a[i] + b[i] != possibleSum)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    else
    {
        ll maxElm = *max_element(all(a));
        ll minElm = *min_element(all(a));

        ll mxSum = minElm + k, mxDig = mxSum - maxElm;

        cout << mxDig + 1 << endl;
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