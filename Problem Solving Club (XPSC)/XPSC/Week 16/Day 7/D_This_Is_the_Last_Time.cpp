/*   Author: Arnab Saha  Date: 07/17/2025 [22:18:40]   */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define pbds tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define checkmate return 0;

using ll = long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define out(x) cout << x << endl
#define endl '\n'

const int mod = 1e9 + 7;

void arnabsahawrk()
{
    int n, k;
    cin >> n >> k;

    multiset<pair<pair<int, int>, int>> ml;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        ml.insert({{x, y}, z});
    }

    for (auto it : ml)
    {
        int x = it.first.first;
        int y = it.first.second;
        int z = it.second;

        if (k >= x && k <= y)
        {
            if (z > k)
                k = z;
        }
    }

    out(k);
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