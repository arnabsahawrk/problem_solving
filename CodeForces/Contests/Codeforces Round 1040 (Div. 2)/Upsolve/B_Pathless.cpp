/*   Author: Arnab Saha  Date: 08/04/2025 [00:51:11]   */
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
    int n, s;
    cin >> n >> s;

    int zero = 0, one = 0, two = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
            zero++;
        else if (x == 1)
            one++;
        else
            two++;

        sum += x;
    }

    if (s < sum || s == sum + 1)
    {
        while (zero--)
        {
            cout << 0 << " ";
        }
        while (two--)
        {
            cout << 2 << " ";
        }
        while (one--)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
        out(-1);
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