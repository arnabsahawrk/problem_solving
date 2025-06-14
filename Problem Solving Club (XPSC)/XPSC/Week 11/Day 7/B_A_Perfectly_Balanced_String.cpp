/*   Author: Arnab Saha  Date: 06/14/2025 [18:09:42]   */
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
#define read(x) freopen(x, "r", stdin)
#define write(x) freopen(x, "w", stdout)
#define checkmate return 0;

using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vb = vector<bool>;
using vs = vector<string>;
using sl = set<ll>;
using sc = set<char>;
using msl = multiset<ll>;

#define pb push_back
#define eb emplace_back
#define spb insert
#define all(x) (x).begin(), (x).end()
#define sz(x) (ll)(x).size()
#define ff first
#define ss second
#define rep(i, a, b) for (ll i = (a); i < (b); ++i)
#define rrep(i, a, b) for (ll i = (a); i >= (b); --i)
#define each(x, a) for (auto &x : a)

#define cin_arr(arr) each(i, arr) cin >> i
#define cout_arr(arr)              \
    each(x, arr) cout << x << " "; \
    cout << endl
#define out(x) cout << x << endl
#define endl '\n'

const int inf = 1e9;
const ll linf = 1e18;
const int mod = 1e9 + 7;

int main()
{
    fast_IO;

    auto arnabsahawrk = [&]()
    {
        string s;
        cin >> s;

        ll n = sz(s);

        ll k = 0;
        sc st;
        rep(i, 0, n)
        {
            if (st.find(s[i]) == st.end())
            {
                st.spb(s[i]);
                k++;
            }
            else
                break;
        }

        rep(i, k, n)
        {
            if (s[i] != s[i - k])
            {
                out("NO");
                return;
            }
        }

        out("YES");
    };

    ll tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}