/*   Author: Arnab Saha  Date: 08/01/2025 [21:23:07]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
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

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        ll y = x % 10;

        arr[i] = y;
    }

    pbds p;
    for (int i = 0; i < n; i++)
    {
        p.insert(arr[i]);

        ll x = p.size();
        int m = x / 2;
        auto it = p.find_by_order(m);

        if (x % 2 == 0)
            it--;

        cout << *it << " ";
    }

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