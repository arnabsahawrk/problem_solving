/*   Author: Arnab Saha  Date: 05/15/2025 [16:31:12]   */
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
    ll n, k;
    cin >> n >> k;

    map<ll, ll> mp;
    vll arr;

    rep(i, 0, n)
    {
        ll x;
        cin >> x;

        mp[x]++;

        if (mp[x] == k)
            arr.eb(x);
    }

    if (arr.empty())
        out(-1);
    else
    {
        if (arr.size() == 1)
        {
            cout << arr[0] << " " << arr[0] << endl;
        }
        else
        {
            sort(all(arr));
            ll l = 0, r = 1, i = arr[l], j = arr[r], mx = 0;
            while (r < sz(arr))
            {
                if (arr[r] - arr[r - 1] > 1)
                {
                    if ((arr[r - 1] - arr[l] >= mx))
                    {
                        i = arr[l], j = arr[r - 1];
                        mx = arr[r - 1] - arr[l];
                    }

                    l = r;
                }
                else if ((arr[r] - arr[l] >= mx))
                {
                    i = arr[l], j = arr[r];
                    mx = arr[r] - arr[l];
                }

                r++;
            }

            cout << i << " " << j << endl;
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