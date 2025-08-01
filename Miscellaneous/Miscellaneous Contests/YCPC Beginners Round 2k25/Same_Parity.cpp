/*   Author: Arnab Saha  Date: 08/01/2025 [20:13:07]   */
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

    int odd = 0, even = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x & 1)
            odd++;
        else if (x == 0)
            zero++;
        else
            even++;
    }

    int oddTemp = odd, evenTemp = even, zeroTemp = zero;
    bool f = true;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            if (odd >= 1)
                odd--;
            else
            {
                f = false;
                break;
            }
        }
        else
        {
            if (even >= 1 || zero >= 1)
            {
                if (zero >= 1)
                    zero--;
                else
                    even--;
            }
            else
            {
                f = false;
                break;
            }
        }
    }

    if (f)
    {
        out("YES");
        return;
    }

    odd = oddTemp, even = evenTemp, zero = zeroTemp;
    f = true;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            if (even >= 1 || zero >= 1)
            {
                if (zero >= 1)
                    zero--;
                else
                    even--;
            }
            else
            {
                f = false;
                break;
            }
        }
        else
        {
            if (odd >= 1)
                odd--;
            else
            {
                f = false;
                break;
            }
        }
    }

    if (f)
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