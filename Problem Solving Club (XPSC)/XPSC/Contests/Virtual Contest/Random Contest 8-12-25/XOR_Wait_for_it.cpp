/*   Author: Arnab Saha  Date: 08/13/2025 [00:26:04]   */
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
    ll l, r;
    cin >> l >> r;

    ll numberofOdd = 0;
    if (r & 1)
        numberofOdd = (r / 2) + 1;
    else
        numberofOdd = r / 2;

    l--;
    if (l & 1)
        numberofOdd -= (l / 2) - 1;
    else
        numberofOdd -= (l / 2);

    if (numberofOdd % 2 == 0)
        out("Even");
    else
        out("Odd");
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