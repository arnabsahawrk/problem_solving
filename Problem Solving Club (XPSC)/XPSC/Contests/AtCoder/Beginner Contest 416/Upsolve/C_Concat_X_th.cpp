/*   Author: Arnab Saha  Date: 08/04/2025 [22:17:25]   */
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

vector<string> ans;

void solve(vector<string> &s, string curr, int k, int count)
{
    if (count == k)
    {
        ans.push_back(curr);
        return;
    }

    for (string str : s)
        solve(s, str + curr, k, count + 1);
}

void arnabsahawrk()
{
    int n, k, x;
    cin >> n >> k >> x;

    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    solve(s, "", k, 0);

    sort(ans.begin(), ans.end());

    out(ans[x - 1]);
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