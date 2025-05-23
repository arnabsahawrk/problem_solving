/*   Author: Arnab Saha  Date: 05/23/2025 [22:03:20]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
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

bool check_bit(ll n, ll k)
{
    return (n >> k) & 1LL;
}

void arnabsahawrk()
{
    ll x;
    cin >> x;

    vll arr(31, 0);
    rep(i, 0, 30)
    {
        if (check_bit(x, i))
        {
            if (arr[i])
            {
                arr[i + 1] = 1;
                arr[i] = 0;
            }
            else if (i > 0)
            {
                if (arr[i - 1] == 1)
                {
                    arr[i - 1] = -1;
                    arr[i + 1] = 1;
                }
                else
                    arr[i] = 1;
            }
            else
                arr[i] = 1;
        }
    }

    out(31);
    rep(i, 0, 31) cout << arr[i] << " ";
    cout << endl;
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