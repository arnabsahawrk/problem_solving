/*   Author: Arnab Saha  Date: 08/10/2025 [18:59:48]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define out(x) cout << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

void arnabsahawrk()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> v;
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        vector<int> a;

        for (int i = 1; i <= m; i++)
        {
            int x;
            cin >> x;

            a.emplace_back(x);
        }

        sort(a.begin(), a.end());

        v.emplace_back(a[1], a[0]);
    }

    sort(v.rbegin(), v.rend());
    ll ans = 0, mn = LLONG_MAX;
    for (int i = 0; i < v.size() - 1; i++)
    {
        ans += v[i].first;
        mn = min(mn, v[i].second);
    }

    ans += min(mn, v[v.size() - 1].second);

    out(ans);
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