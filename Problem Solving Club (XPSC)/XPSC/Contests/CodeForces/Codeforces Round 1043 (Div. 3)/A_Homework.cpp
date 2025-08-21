/*   Author: Arnab Saha  Date: 08/21/2025 [20:40:45]   */
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
    string a;
    cin >> n >> a;

    int m;
    string b, c;
    cin >> m >> b >> c;

    for (int i = 0; i < m; i++)
    {
        if (c[i] == 'V')
            a = b[i] + a;
        else
            a += b[i];
    }
    cout << a << endl;
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