/*   Author: Arnab Saha  Date: 06/19/2025 [11:51:47]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<ll>;
using vb = vector<bool>;
using vs = vector<string>;

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define rep(i, a, b) for (ll i = (a); i < (b); ++i)
#define rrep(i, a, b) for (ll i = (a); i >= (b); --i)
#define each(x, a) for (auto &x : a)
#define rin(v) each(i, v) cin >> i
#define out(x) cout << x << endl
#define endl '\n'

const ll inf = 1e9;
const ll linf = 1e18;
const ll mod = 1e9 + 7;

void arnabsahawrk()
{
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    ll g = 0, b = 0, o = 0, z = 0;
    ll i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            g++;
            if (s[i] == '0')
                z++;
            else
                o++;
        }
        else
            b++;

        i++, j--;
    }

    if (g == k)
    {
        out("YES");
    }
    else if (g < k)
    {
        while (b > 1 && g != k)
        {
            b -= 2;
            g += 2;
        }

        if (g == k)
            out("YES");
        else
            out("NO");
    }
    else
    {
        while (g > 1 && o != 0 && z != 0 && g != k)
        {
            g -= 2;
            b += 2;
            o--;
            z--;
        }

        if (g == k)
            out("YES");
        else
            out("NO");
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}