/*   Author: Arnab Saha  Date: 08/12/2025 [20:53:01]   */
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
    ll n, k;
    cin >> n >> k;

    ll a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    ll sum = 0;
    pair<int, int> ab[n];
    for (int i = 0; i < n; i++)
    {
        sum += abs(a[i] - b[i]);

        if (a[i] >= b[i])
            ab[i] = {b[i], a[i]};
        else
            ab[i] = {a[i], b[i]};
    }

    sort(ab, ab + n);
    ll mn = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (ab[i - 1].second >= ab[i].first)
        {
            out(sum);
            return;
        }

        mn = min(mn, (ab[i].first - ab[i - 1].second) * 2LL);
    }
    out(sum + mn);
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