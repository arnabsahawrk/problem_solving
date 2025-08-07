/*   Author: Arnab Saha  Date: 08/06/2025 [22:02:53]   */
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

    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            int temp = b[i];
            b[i] = a[i];
            a[i] = temp;
        }
        else if (a[i] < b[i])
        {
            int temp = b[i];
            b[i] = a[i];
            a[i] = temp;
        }
    }

    sort(a, a + n);
    sort(b, b + n);

    int mex = 0, bmex = 0;

    for (int i = 0; i < n; i++)
    {
        if (mex == a[i])
            mex++;

        if (bmex == b[i])
            bmex++;
    }

    out(max(mex, bmex));
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