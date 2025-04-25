/*   Author: Arnab Saha  Date: 25/04/2025 [14:31:13]   */
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
    ll n, m, k;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    ll l = 0, r = 0, count = 0, ans = 0;
    while (r < n)
    {
        if (s[r] == '0')
            count++;

        if (r - l + 1 == m)
        {
            if (count == m)
            {
                ans++;
                r = r + k;
                l = r;
                count = 0;
            }
            else
            {
                if (s[l] == '0')
                    count--;
                r++;
                l++;
            }
        }
        else
            r++;
    }

    cout << ans << endl;
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