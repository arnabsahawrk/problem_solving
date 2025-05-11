/*   Author: Arnab Saha  Date: 05/11/2025 [21:42:19]   */
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

    if (n <= 2)
    {
        while (n--)
        {
            ll x;
            cin >> x;
        }

        out("YES");
    }
    else
    {
        ll median = (n + 2 - 1) / 2;
        vll arr(n + 1);
        ll firstIndex;
        rep(i, 1, n + 1)
        {
            ll x;
            cin >> x;

            x = abs(x);

            if (i == 1)
                firstIndex = x;

            arr[i] = x;
        }

        sort(arr.begin() + 1, arr.end());

        rep(i, 1, n + 1)
        {
            if (arr[i] == firstIndex)
            {
                if ((i <= median) || (n % 2 == 0 && i == median + 1))
                    out("YES");
                else
                    out("NO");

                break;
            }
        }
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