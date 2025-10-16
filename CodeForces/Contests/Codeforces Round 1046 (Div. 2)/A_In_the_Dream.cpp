/*   Author: Arnab Saha  Date: 08/28/2025 [20:42:44]   */
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool f = (a <= 2 * (b + 1)) && (b <= 2 * (a + 1));

    int x = c - a, y = d - b;

    bool f2 = (x <= 2 * (y + 1)) && (y <= 2 * (x + 1));

    if (f && f2)
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