/*   Author: Arnab Saha  Date: 07/15/2025 [20:55:33]   */
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

ll off_bit(int n, int k)
{
    return n & ~(1LL << k);
}

bool check_bit(int n, int k)
{
    return (n >> k) & 1LL;
}

void arnabsahawrk()
{
    int n, x;
    cin >> n >> x;

    if (n == 1)
    {
        out(x);
        return;
    }
    else if (n == 2)
    {
        cout << x << " " << 0 << endl;
        return;
    }

    vector<ll> v;
    int msb = __lg(x);

    for (int i = 0; i < n; i++)
    {
        if (((x | i) == x))
        {
            v.push_back(i);
        }
        else
            v.push_back(x);
    }

    sort(all(v));

    ll y = 0;
    for (int i = 0; i <= msb; i++)
    {
        if (check_bit(x, i))
        {
            y = off_bit(x, i);
            break;
        }
    }

    int a = 0;
    int j = 0;
    for (j = 0; j < n; j++)
    {
        a |= v[j];
        if (j != n - 1)
            cout << v[j] << " ";
    }

    if (a == x)
        cout << v[j - 1] << endl;
    else
        cout << y << endl;
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