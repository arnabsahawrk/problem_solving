/*   Author: Arnab Saha  Date: 07/26/2025 [18:08:55]   */
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
    string s, t;
    cin >> s;

    bool f = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '#')
        {
            t.push_back('#');
            f = true;
        }
        else if (f)
        {
            t.push_back('o');
            f = false;
        }
        else
            t.push_back('.');
    }

    out(t);
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