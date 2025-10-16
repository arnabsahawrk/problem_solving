/*   Author: Arnab Saha  Date: 08/12/2025 [17:44:06]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define out(x) cout << fixed << setprecision(7) << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

void arnabsahawrk()
{
    int n;
    cin >> n;

    double ans = 0;
    for (int i = 1; i <= n; i++)
    {
        double x, y, z;
        cin >> x >> y >> z;

        double curr = x * y;
        x += (x * z) / 100.0;
        x -= (x * z) / 100.0;
        ans += (curr) - (x * y);
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