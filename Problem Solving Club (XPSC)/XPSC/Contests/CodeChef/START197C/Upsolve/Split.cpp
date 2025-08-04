/*   Author: Arnab Saha  Date: 08/03/2025 [22:55:39]   */
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
int n, k;
string s;

bool ok(int m)
{
    int zero = 0, mxSequence = 0, split = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zero++;
        else
            mxSequence++;

        mxSequence = max(mxSequence, zero);

        if (mxSequence >= m)
        {
            split++;
            zero = 0, mxSequence = 0;
        }
    }

    return split >= k;
}

void arnabsahawrk()
{
    cin >> n >> k;

    cin >> s;

    int l = 0, r = n, ans = 0;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (ok(m))
        {
            ans = max(ans, m);
            l = m + 1;
        }
        else
            r = m - 1;
    }

    out(ans);
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