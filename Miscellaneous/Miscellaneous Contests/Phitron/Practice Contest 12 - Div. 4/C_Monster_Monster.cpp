/*   Author: Arnab Saha  Date: 07/28/2025 [20:10:29]   */
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
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.rbegin(), v.rend());

    ll ans = v[0];
    for (int i = 1; i < n; i++)
    {
        ll y = (1LL * x * i);
        ans = max(ans, (1LL * v[i] + y));
    }
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