/*   Author: Arnab Saha  Date: 08/09/2025 [18:12:00]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define out(x) cout << fixed << setprecision(17) << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

ld t = 0.00000000000000000;

void arnabsahawrk()
{
    string s;
    cin >> s;

    ld l = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 't')
            break;
        else
            l++;
    }

    ld r = s.size() - 1;
    for (int j = s.size() - 1; j >= 0; j--)
    {
        if (s[j] == 't')
            break;
        else
            r--;
    }

    if ((l > r))
    {
        out(t);
        return;
    }

    int x = 0;
    for (int i = l; i <= r; i++)
    {
        if (s[i] == 't')
            x++;
    }

    if (x <= 2)
    {
        out(t);
        return;
    }

    t = (x - 2) / (((r - l) + 1) - 2);

    out(t);
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