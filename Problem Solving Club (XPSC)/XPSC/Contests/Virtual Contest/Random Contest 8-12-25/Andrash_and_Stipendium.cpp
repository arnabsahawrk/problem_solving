/*   Author: Arnab Saha  Date: 08/12/2025 [23:30:04]   */
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

    bool failed = true, expert = false;
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        sum += x;

        if (x == 2)
            failed = false;
        else if (x == 5)
            expert = true;
    }

    if (failed && expert)
    {
        if ((float)sum / n >= 4.0)
            out("Yes");
        else
            out("No");
    }
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