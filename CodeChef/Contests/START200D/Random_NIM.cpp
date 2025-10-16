/*   Author: Arnab Saha  Date: 08/20/2025 [21:09:29]   */
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

const int mod = 499122177;

void arnabsahawrk()
{
    int n;
    cin >> n;

    bool f = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x != 1)
            f = false;
    }

    if (f)
    {
        if (n % 2 == 1)
            out(1);
        else
            out(0);
    }
    else
        out(mod);
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