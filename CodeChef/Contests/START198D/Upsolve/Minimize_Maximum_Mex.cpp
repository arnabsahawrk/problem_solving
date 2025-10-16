/*   Author: Arnab Saha  Date: 08/09/2025 [20:29:25]   */
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

const int N = 3e5 + 7;
int ans[N];

void arnabsahawrk()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        ans[i] = 0;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < n; j++)
        cin >> b[j];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            ans[a[i]] = 2;
        else
        {
            if (ans[a[i]] != 2)
                ans[a[i]] = 1;

            if (ans[b[i]] != 2)
                ans[b[i]] = 1;
        }
    }

    int mex = 0;
    bool f = true;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 2)
            mex++;
        else if (ans[i] == 1 && f)
            mex++, f = false;
        else
            break;
    }

    out(mex);
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