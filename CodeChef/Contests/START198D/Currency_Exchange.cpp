/*   Author: Arnab Saha  Date: 08/06/2025 [20:59:22]   */
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
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 && b1 == b2)
    {
        out("Yes");
        return;
    }

    int a = abs(a1 - a2), b = abs(b1 - b2);

    if (a == b || (a * 5) == b)
        out("Yes");
    else
        out("No");
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