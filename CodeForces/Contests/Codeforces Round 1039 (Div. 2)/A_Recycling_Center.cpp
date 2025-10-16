/*   Author: Arnab Saha  Date: 07/27/2025 [20:39:30]   */
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
    int n, c;
    cin >> n >> c;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;
    while (!a.empty())
    {
        while (a.back() > c && !a.empty())
        {
            ans++;
            a.pop_back();
        }
        if (!a.empty())
            a.pop_back();

        for (int i = 0; i < a.size(); i++)
        {
            a[i] *= 2;
        }
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