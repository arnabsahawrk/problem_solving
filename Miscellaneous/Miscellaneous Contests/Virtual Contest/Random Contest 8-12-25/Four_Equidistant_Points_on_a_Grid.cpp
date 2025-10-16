/*   Author: Arnab Saha  Date: 08/12/2025 [18:32:34]   */
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
    int d;
    cin >> d;

    if (d & 1)
    {
        out(-1);
        return;
    }

    cout << d << " " << d / 2 << endl;
    cout << d / 2 << " " << d << endl;
    cout << d + (d / 2) << " " << d << endl;
    cout << d << " " << d + (d / 2) << endl;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    // cin >> tc;
    while (tc--)
        arnabsahawrk();

    checkmate;
}