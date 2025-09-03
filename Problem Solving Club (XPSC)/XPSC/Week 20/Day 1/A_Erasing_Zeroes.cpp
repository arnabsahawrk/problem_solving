/*   Author: Arnab Saha  Date: 09/03/2025 [22:44:06]   */
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
    string s;
    cin >> s;
    auto it = find(s.begin(), s.end(), '1');
    int cnt = 0;
    for (auto i = it; i != s.end();)
    {
        auto t = find((i + 1), s.end(), '1');
        if (t != s.end())
        {
            cnt += (t - i - 1);
            i = t;
        }
        else
        {
            i = s.end();
        }
    }
    out(cnt);
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