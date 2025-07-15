/*   Author: Arnab Saha  Date: 07/15/2025 [12:12:55]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define out(x) cout << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

void arnabsahawrk()
{
    int n, c, q;
    cin >> n >> c >> q;

    string str;
    cin >> str;

    vector<pair<ll, ll>> ops(c), segs(c);
    ll curr_len = n;
    for (int i = 0; i < c; i++)
    {
        ll l, r;
        cin >> l >> r;

        ops[i] = {l, r};
        segs[i] = {curr_len + 1, curr_len + (r - l + 1)};
        curr_len = segs[i].second;
    }

    while (q--)
    {
        ll k;
        cin >> k;

        if (k > n)
        {
            for (int i = c - 1; i >= 0; i--)
            {
                if (k >= segs[i].first && k <= segs[i].second)
                {
                    k = ops[i].first + (k - segs[i].first);
                }
            }
        }

        out(str[k - 1]);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}