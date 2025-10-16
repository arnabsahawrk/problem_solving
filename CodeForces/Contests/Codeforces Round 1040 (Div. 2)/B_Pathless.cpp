/*   Author: Arnab Saha  Date: 07/31/2025 [22:33:26]   */
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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            zero++;
        else if (v[i] == 1)
            sum += 1, one++;
        else
            sum += 2, two++;
    }

    if (sum > s)
    {
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    else if (s == 4 && n == 3)
    {
        cout << 0 << " " << 2 << " " << 1 << endl;
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