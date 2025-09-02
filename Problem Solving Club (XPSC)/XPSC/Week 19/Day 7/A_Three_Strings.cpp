/*   Author: Arnab Saha  Date: 09/02/2025 [22:25:29]   */
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
    string a, b, c;
    cin >> a >> b >> c;

    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] && b[i] == c[i])
            continue;
        else if (a[i] == c[i] || b[i] == c[i])
            continue;
        else
        {
            out("NO");
            return;
        }
    }

    out("YES");
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