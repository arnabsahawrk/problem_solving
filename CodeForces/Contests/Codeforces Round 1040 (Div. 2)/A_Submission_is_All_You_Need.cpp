/*   Author: Arnab Saha  Date: 07/31/2025 [20:44:10]   */
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

    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ml.insert(x);
    }

    bool zero = true, one = true;
    int ans = 0;
    while (zero || one)
    {
        auto it = ml.find(0);

        if (it != ml.end())
        {
            ans++;
            ml.erase(it);
        }
        else
            break;

        if (one)
            it = ml.find(1);

        if (one && it != ml.end())
        {
            ans++;
            ml.erase(it);
        }
        else
            one = false;
    }

    for (int x : ml)
        ans += x;

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