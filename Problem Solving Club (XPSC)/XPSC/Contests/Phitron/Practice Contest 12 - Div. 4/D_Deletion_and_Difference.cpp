/*   Author: Arnab Saha  Date: 07/28/2025 [20:33:23]   */
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

    vector<int> v;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
            zero++;
        else
            v.emplace_back(x);
    }

    if (v.empty())
    {
        out(1);
        return;
    }

    sort(v.begin(), v.end());
    int match = 0;
    n = v.size();
    for (int i = 0, j = 1; j < n; i++, j++)
    {
        if (v[i] == v[j])
        {
            match++;
            i++, j++;
        }
    }

    match *= 2;

    if (zero || match)
        zero = 1;

    out(max(1, ((n - match) + zero)));
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