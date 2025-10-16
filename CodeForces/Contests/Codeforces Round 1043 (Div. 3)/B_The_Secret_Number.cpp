/*   Author: Arnab Saha  Date: 08/21/2025 [20:46:34]   */
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
    ll n;
    cin >> n;

    vector<ll> arr(19, 1);
    for (int i = 1; i <= 18; i++)
        arr[i] = arr[i - 1] * 10LL;

    vector<ll> ans;
    for (int i = 1; i <= 18; i++)
    {
        ll x = 1 + arr[i];
        if (x > n)
            continue;
        if (n % x == 0)
            ans.push_back(n / x);
    }

    if (ans.empty())
    {
        out(0);
        return;
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (ll x : ans)
        cout << " " << x;
    cout << endl;
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
