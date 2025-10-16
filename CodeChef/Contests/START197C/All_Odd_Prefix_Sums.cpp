/*   Author: Arnab Saha  Date: 07/30/2025 [20:38:36]   */
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

    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x & 1)
            odd++;
        else
            even++;
    }

    int f = 1;
    for (int i = 1; i <= n; i += 2)
    {
        if (f)
        {
            if (odd <= 0)
            {
                out("No");
                return;
            }
            else
            {
                odd--, even--;
            }
        }
        else
        {
            if (even <= 0)
            {
                out("No");
                return;
            }
            else
            {
                odd--, even--;
            }
        }

        f ^= 1;
    }

    out("Yes");
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