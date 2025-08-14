/*   Author: Arnab Saha  Date: 08/14/2025 [19:19:11]   */
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

bool check_bit(ll n, ll k)
{
    return (n >> k) & 1LL;
}

void arnabsahawrk()
{
    int n;
    cin >> n;

    int arr[n];
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        mx = max(mx, arr[i]);
    }

    int x = __lg(mx);
    bool bits[x + 1];
    for (int i = 0; i <= x; i++)
        bits[i] = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= __lg(arr[i]); j++)
        {
            if (check_bit(arr[i], j))
                bits[j] = true;
        }
    }

    int ans = 0;
    for (int i = 0; i <= x; i++)
        if (bits[i])
            ans++;

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