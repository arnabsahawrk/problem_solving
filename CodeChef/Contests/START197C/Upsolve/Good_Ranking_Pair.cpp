/*   Author: Arnab Saha  Date: 08/03/2025 [01:03:49]   */
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
    int n;
    cin >> n;

    out(2);
    for (int i = 1; i <= n; i++)
        cout << i << " ";

    cout << endl;

    for (int i = n; i >= 1; i--)
        cout << i << " ";
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