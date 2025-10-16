/*   Author: Arnab Saha  Date: 08/26/2025 [20:37:24]   */
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
    long long n, a, b;
    cin >> n >> a >> b;

    if (((n - b) & 1LL) != 0)
    {
        out("NO");
        return;
    }

    if (a <= b)
    {
        out("YES");
        return;
    }

    if (((n - a) & 1LL) == 0)
        out("YES");
    else
        out("NO");
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