/*   Author: Arnab Saha  Date: 08/07/2025 [21:24:26]   */
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
    int n, x;
    cin >> n >> x;

    char arr[n + 1];
    bool wall = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

        if (arr[i] == '#')
            wall = true;
    }

    if (!wall || (x == 1 || x == n))
    {
        out(1);
        return;
    }

    wall = false;
    int leftW = 0;
    for (int i = 1; i <= x; i++)
    {
        if (arr[i] == '#')
        {
            wall = true;
            leftW++;
        }
    }

    if (!wall)
    {
        out(1);
        return;
    }

    wall = false;
    int rightW = 0;
    for (int i = x + 1; i <= n; i++)
    {
        if (arr[i] == '#')
        {
            wall = true;
            rightW++;
        }
    }

    if (!wall || ((leftW == 1 && rightW == 1) && (arr[x - 1] != '#' && arr[x + 1] != '#')))
    {
        out(1);
        return;
    }

    int rw = 0;
    for (int i = x + 1; i <= n; i++)
    {
        if (arr[i] == '#')
        {
            rw = i;
            break;
        }
    }

    int lw = 0;
    for (int i = x - 1; i >= 1; i--)
    {
        if (arr[i] == '#')
        {
            lw = i;
            break;
        }
    }

    lw = (lw - 1) + 1, rw = (n - rw) + 1;

    out(max(lw, rw) + 1);
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